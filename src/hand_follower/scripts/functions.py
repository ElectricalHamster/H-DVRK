import cv2
import numpy as np
import subprocess


def command_fun(input_command):
    
    position = input_command[0:3]
    print(position)
    close_flag = str(input_command[3])

    position_str = str(position[0]) + " " + str(position[1]) + " " + str(position[2])
    command = "rosrun cwru_dvrk_control go_psm_cart 2 " + position_str + " 0.057444 -0.972415 0.226075 -0.993864 -0.034261 0.105165 "+ close_flag + " 0.1"
    print(command)


    process = subprocess.Popen(command, shell=True, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)


    process.stdin.close()
    process.wait()


    output = process.stdout.read().decode("utf-8")
    error = process.stderr.read().decode("utf-8")


    print("Output:", output)
    print("Error:", error)


'''
if __name__ == "__main__":
    test_command = [0.005, -0.001, -0.052113, 1]
    command_fun(test_command)

'''    