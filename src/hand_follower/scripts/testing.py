#!/usr/bin/env python


import cv2
import subprocess
import os
import numpy as np
from functions import calculate_depth, command_fun
from gesture_landmark_labels_detector import GestureLandmarkDetector
import warnings
warnings.filterwarnings('ignore')
file_path = os.path.abspath(os.path.dirname(__file__))
MODEL_PATH = os.path.join(file_path, 'Hand_tracking.pb')


def getProperSize(picWidth, picHeight):
    """
    keep ratio, long side
    :param picWidth:
    :param picHeight:
    :return:
    """
    NET_W, NET_H = 512, 288
    if picWidth >= picHeight:
        netInputW = NET_W
        ratio = netInputW/picWidth
        netInputH = int(ratio * picHeight)
    else:
        netInputH = NET_H
        ratio = netInputH/picHeight
        netInputW = int(ratio * picWidth)

    return netInputW, netInputH


def get_depth_at_point(disparity_map, x, y, f, B):
    # Check if the point has a valid disparity
    if disparity_map[y, x] > 0:
        depth = (f * B) / disparity_map[y, x]
        return depth
    else:
        return None  # Invalid disparity or no depth available
    

def getvideo(whole_hand_detect=False, record=False):
    '''
    "rosrun cwru_dvrk_control get_psm_cart 2" can get current position of PSM2 from terminal
    '''
    command_inital_position = "rosrun cwru_dvrk_control get_psm_cart 2"
    result = subprocess.run(command_inital_position, shell=True, capture_output=True, text=True)
    result_list_temp = result.stdout.split(" ")
    # print(result_list_temp)
    result_list = []
    result_list = [float(i) for i in result_list_temp]
    initial_position = result_list[0:2]

    gesture_landmark_detector = GestureLandmarkDetector(
        MODEL_PATH,
        gpu_memory_fraction=0.85)
    
    videoCapture = cv2.VideoCapture('/dev/video0')
    videoCapture2 = cv2.VideoCapture('/dev/video4')
    
    # get size and fps    
    if record:
        fps = videoCapture.get(cv2.CAP_PROP_FPS)
        size = (int(videoCapture.get(cv2.CAP_PROP_FRAME_WIDTH)), int(videoCapture.get(cv2.CAP_PROP_FRAME_HEIGHT)))
        videoWriter = cv2.VideoWriter('/home/hands/ros_ws/src/hand_follower/Result/result_two_grip.mp4', cv2.VideoWriter_fourcc(*'XVID'),
                                    int(fps), size)
    imgArr = []
    # READ FPS
    pause = False
    lastPosition = initial_position
    while True:
        success, frame = videoCapture.read()        
        frame = cv2.flip(frame, 1) # flip the video
        if not success:
            print("Can't get frame from camera")
            break

        imgRGB = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

        picHeight, picWidth, _ = imgRGB.shape
        netInputW, netInputH = getProperSize(picWidth, picHeight)
        imgRGB = cv2.resize(imgRGB, (netInputW, netInputH), interpolation=cv2.INTER_LINEAR)

        boxes, scores, landmarks = gesture_landmark_detector(imgRGB, score_threshold=0.85)
        boxes, landmarks = _normalized_to_image(frame, boxes, landmarks, netInputW, netInputH)
        landmarks_test = landmarks
        frame_new = frame
        if whole_hand_detect:
            current_position = []
            img_tips = frame
            
            if landmarks.shape[0]:
                for i in range(landmarks.shape[0]):
                    if len(landmarks) != 0:
                        landmarks_test = np.vstack((np.reshape(landmarks[i], (-1, 2))[0], np.reshape(landmarks[i], (-1, 2))[4]))
                        landmarks_test = np.vstack((landmarks_test, np.reshape(landmarks[i], (-1, 2))[8]))
                        wrist_x = landmarks_test[0][0]
                        thumb_x = landmarks_test[1][0]
                        direction_x = thumb_x - wrist_x
                        wrist_y = landmarks_test[0][1]

                        for i in range(3):
                            x = landmarks_test[i][0]
                            y = landmarks_test[i][1]
                                
                            cv2.circle(img_tips, center=(int(x), int(y)), radius=5, color=(0, 255, 255), thickness=-1)
                        
                        closed_bool, angle_degree = is_thumb_index_closed(landmarks_test[0], landmarks_test[1], landmarks_test[2], threshold=10)
                        newPosition = [-wrist_x/picWidth*100*2, -wrist_y/picHeight*100*2] # get position from current frame 
                        
                        if direction_x > 0: # if direction_x less than 0, it's left hand
                        
                            open_flag = 0
                            
                            distance = [x - y for x, y in zip(newPosition, lastPosition)]
                            current_position = [x + y for x, y in zip(lastPosition, distance)] # Update current_Position every frame
                            lastPosition = newPosition # Update lastposition
                            current_position.append(result_list[2])
                            if closed_bool == True:
                                current_position.append(open_flag)
                            else:
                                current_position.append(1)
                            command_fun(current_position)
                            print(f' LEFT GRIPPER IS CLOSED, THE ANGLE IS {round(angle_degree, 3)} degree')
                        else:
                            
                            open_flag = 2
                            distance = [x - y for x, y in zip(newPosition, lastPosition)]
                            current_position = [x + y for x, y in zip(lastPosition, distance)] # Update current_Position every frame
                            lastPosition = newPosition # Update lastposition
                            current_position.append(result_list[2])
                            if closed_bool == True:
                                current_position.append(open_flag)
                            else:
                                current_position.append(1)
                            command_fun(current_position)
                            print(f' LEFT GRIPPER IS CLOSED, THE ANGLE IS {round(angle_degree, 3)} degree')

                
            frame_new = img_tips
        else:
            frame_new = drawBoxes(frame, boxes, scores, landmarks, testing=True)
            draw_landmarks(frame_new, landmarks)
        
        
        
        cv2.namedWindow('windows', 0)
        cv2.imshow('windows', frame_new)
        key = cv2.waitKey(1 if pause else 1000 // int(fps))
        if key == ord('P') or key == ord('p'):
            pause = ~pause
        if key == ord('Q') or key == ord('q'):
            break

        
        
    for i in range(len(imgArr)):
        videoWriter.write(imgArr[i])

    videoCapture.release()
    videoCapture2.release()
    cv2.destroyAllWindows()


def _normalized_to_image(image, boxes, landmarks, width, height):
    h, w, c = image.shape
    keypoints = []
    bboxes = []
    if len(landmarks) != 0:
        for landmark in landmarks:
            for i in range(len(landmark)):
                if i // 2 == 0:
                    # print(landmarks[i])
                    keypoints.append((landmark[i]) / width * w)
                else:
                    keypoints.append((landmark[i]) / height * h)
        for box in boxes:
            for i in range(len(box)):
                if i // 2 == 0:
                    # print(landmarks[i])
                    bboxes.append((box[i]) / width * w)
                else:
                    bboxes.append((box[i]) / height * h)

        landmarks = np.reshape(np.array(keypoints), (-1, 42))
        boxes = np.reshape(np.array(bboxes), (-1, 4))
    else:
        landmarks = landmarks
        boxes = boxes

    return boxes, landmarks


def draw_landmarks(image, landmarks_or):
    if len(landmarks_or) != 0:
        for landmarks in landmarks_or:
            landmarks = np.reshape(np.array(landmarks), (-1, 2)).tolist()
        # print(len(landmarks))
            # print((landmarks[0], landmarks[1]), (landmarks[1], landmarks[2]))
            hand_connections = ([
                (landmarks[0], landmarks[1]),
                (landmarks[1], landmarks[2]),
                (landmarks[2], landmarks[3]),
                (landmarks[3], landmarks[4]),
                (landmarks[0], landmarks[5]),
                (landmarks[5], landmarks[6]),
                (landmarks[6], landmarks[7]),
                (landmarks[7], landmarks[8]),
                (landmarks[9], landmarks[10]),
                (landmarks[10], landmarks[11]),
                (landmarks[11], landmarks[12]),
                (landmarks[13], landmarks[14]),
                (landmarks[14], landmarks[15]),
                (landmarks[15], landmarks[16]),
                (landmarks[0], landmarks[17]),
                (landmarks[17], landmarks[18]),
                (landmarks[18], landmarks[19]),
                (landmarks[19], landmarks[20]),
                (landmarks[5], landmarks[9]),
                (landmarks[9], landmarks[13]),
                (landmarks[13], landmarks[17]),
            ])
            # print(hand_connections)

            for connection in hand_connections:
                cv2.line(image, (int(connection[0][0]), int(connection[0][1])),
                         (int(connection[1][0]), int(connection[1][1])), (0, 0, 255), 2)


def drawBoxes(img, boxes, scores, landmarks, testing):
    y1_array = boxes[:, 0]
    x1_array = boxes[:, 1]
    y2_array = boxes[:, 2]
    x2_array = boxes[:, 3]
    img_copy = img.copy()

    drawColor = (239, 209, 141)

    landmarks_list = []
    print(x1_array.shape[0])
    for i in range(x1_array.shape[0]):
        
        cv2.rectangle(
            img, (int(x1_array[i]), int(y1_array[i])), (int(x2_array[i]), int(y2_array[i])), drawColor, 3)
        pos = (int(x1_array[i] - 20), int(y1_array[i] - 20))
        score_string = '%.2f' % scores[i]
        if testing is True:
            img = cv2.putText(img, 'labels:{}, pro:{}'.format('None', score_string), pos, cv2.FONT_HERSHEY_PLAIN,
                              3, drawColor, 1)
            for j in range(21):
                x = landmarks[i][2*j]
                y = landmarks[i][2*j+1]
                landmarks_list.append((x, y))
                cv2.circle(img, center=(int(x), int(y)), radius=5, color=(0, 255, 255), thickness=-1)
        elif testing is False:
            gesture_string = 'others'
            if gesture_string == 12:
                gesture_string = 'stop'
            else:
                gesture_string = 'others'
            img = cv2.putText(img, 'labels:{}, pro:{}'.format(gesture_string, score_string), pos,
                              cv2.FONT_HERSHEY_COMPLEX, 1, drawColor, 1)


    return img


def getProperSize(picWidth, picHeight):
    """
    keep ratio, long side
    :param picWidth:
    :param picHeight:
    :return:
    """
    NET_W, NET_H = 512, 288
    if picWidth >= picHeight:
        netInputW = NET_W
        ratio = netInputW/picWidth
        netInputH = int(ratio * picHeight)
    else:
        netInputH = NET_H
        ratio = netInputH/picHeight
        netInputW = int(ratio * picWidth)

    return netInputW, netInputH


def is_thumb_index_closed(wrist_pos, thumb_tip, index_tip, threshold=15):
    wrist2thumb = np.array(wrist_pos - thumb_tip)
    wrist2index = np.array(wrist_pos - index_tip)
    dot_product = np.dot(wrist2thumb, wrist2index)

    norm_wrist2thumb = np.linalg.norm(wrist2thumb)
    norm_wrist2index = np.linalg.norm(wrist2index)

    cos_angle = dot_product /(norm_wrist2index * norm_wrist2thumb)
    angle = np.arccos(cos_angle)
    angle_in_degree = np.degrees(angle)

    return angle_in_degree <= threshold, angle_in_degree


if __name__ == '__main__':
    getvideo(whole_hand_detect=False, record=False)
