#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/hands/ros_ws/src/crtk/crtk_python_client"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/hands/ros_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/hands/ros_ws/install/lib/python3/dist-packages:/home/hands/ros_ws/build/crtk_python_client/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/hands/ros_ws/build/crtk_python_client" \
    "/usr/bin/python3" \
    "/home/hands/ros_ws/src/crtk/crtk_python_client/setup.py" \
     \
    build --build-base "/home/hands/ros_ws/build/crtk_python_client" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/hands/ros_ws/install" --install-scripts="/home/hands/ros_ws/install/bin"
