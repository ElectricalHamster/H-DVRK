#!/usr/bin/env python
import tensorflow._api.v2.compat.v1 as tf
import numpy as np

IS_ONLY_DET = False


class GestureLandmarkDetector:
    def __init__(self, model_path, gpu_memory_fraction=0.25, visible_device_list='0'):
        """
        Arguments:
            model_path: a string, path to a pb file.
            gpu_memory_fraction: a float number.
            visible_device_list: a string.
        """
        with tf.gfile.GFile(model_path, 'rb') as f:
            graph_def = tf.GraphDef()
            graph_def.ParseFromString(f.read())

        graph = tf.Graph()
        with graph.as_default():
            tf.import_graph_def(graph_def, name='import')

        self.input_image = graph.get_tensor_by_name('import/image_tensor:0')
        if IS_ONLY_DET:
            self.output_ops = [
                graph.get_tensor_by_name('import/boxes:0'),
                graph.get_tensor_by_name('import/scores:0'),
                graph.get_tensor_by_name('import/num_boxes:0'),
            ]
        else:
            self.output_ops = [
                graph.get_tensor_by_name('import/boxes:0'),
                graph.get_tensor_by_name('import/scores:0'),
                graph.get_tensor_by_name('import/num_boxes:0'),
                graph.get_tensor_by_name('import/landmarks:0'),
                # graph.get_tensor_by_name('import/gesture_labels:0'),
            ]

        gpu_options = tf.GPUOptions(
            per_process_gpu_memory_fraction=gpu_memory_fraction,
            visible_device_list=visible_device_list,
            allow_growth=True
        )
        config_proto = tf.ConfigProto(gpu_options=gpu_options, log_device_placement=False)
        self.sess = tf.Session(graph=graph, config=config_proto)

    def __call__(self, image, score_threshold=0.5):
        """Detect faces.

        Arguments:
            image: a numpy uint8 array with shape [height, width, 3],
                that represents a RGB image.
            score_threshold: a float number.
        Returns:
            boxes: a float numpy array of shape [num_faces, 4].
            scores: a float numpy array of shape [num_faces].

        Note that box coordinates are in the order: ymin, xmin, ymax, xmax!
        """
        h, w, _ = image.shape
        image = np.expand_dims(image, 0)

        if IS_ONLY_DET:
            boxes, scores, num_boxes = self.sess.run(
                self.output_ops, feed_dict={self.input_image: image}
            )
        else:
            boxes, scores, num_boxes, landmarks = self.sess.run(
                self.output_ops, feed_dict={self.input_image: image}
            )

        num_boxes = num_boxes[0]
        boxes = boxes[0][:num_boxes]
        scores = scores[0][:num_boxes]

        if IS_ONLY_DET:
            landmarks = np.zeros([num_boxes, 42])
            # labels = np.zeros([num_boxes, 19])
        else:
            landmarks = landmarks[0][:num_boxes]
            # labels = labels[0][:num_boxes]
            # quality = quality[0][:num_boxes]
            # blur = blur[0][:num_boxes]
            # occlude = occlude[0][:num_boxes]

        to_keep = scores > score_threshold
        boxes = boxes[to_keep]
        scores = scores[to_keep]
        landmarks = landmarks[to_keep]
        # labels = labels[to_keep]
        # quality = quality[to_keep]
        # blur = blur[to_keep]
        # occlude = occlude[to_keep]

        box_scaler = np.array([h, w, h, w], dtype='float32')
        boxes = boxes * box_scaler

        landmark_scaler = np.array([w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    w, h,
                                    ], dtype='float32')

        landmarks = landmarks * landmark_scaler

        return boxes, scores, landmarks
