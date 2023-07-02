Author: Christian H. Brown July 2nd, 2023

##########DISCLAIMER###########
    This project followed a tutorial listed by 
    "https://medium.com/analytics-vidhya/building-a-face-detector-with-opencv-in-c-8814cd374ea1"
    The purpose of this project is to better understand C++ and OpenCV.
###############################

Title: Face Detection using OpenCV, C++

Description:
The Face Detection Project is a computer vision application that utilizes the OpenCV library and C++ programming 
    language to detect and recognize human faces in images or video streams. This project leverages the power of OpenCV's 
    face detection algorithms and techniques to accurately identify and locate faces in real-time.

Objectives:
The main objective of this project is to provide a robust and efficient solution for detecting faces, which can be 
    used in various applications such as facial recognition systems, video surveillance, emotion analysis, and more. 
    By leveraging OpenCV's built-in face detection capabilities, the project aims for a better understanding and 
    knowledge of OpenCV.

## Table of Contents
- [Installation](#installation) Line 35

- [Usage](#usage)

- [Configuration](#configuration)

- [Contributing](#contributing)

- [License](#license)

- [Credits](#credits)

- [Documentation](#documentation)

- [Contact Information](#contact-information)



Installation: 
    For MacOS:
        On MacOS HomeBrew was utilized to allow for easy installation. If you do not want to install HomeBrew 
        skip step 3.

        1. Install HomeBrew (https://brew.sh/)

        2. Install OpenCV using the command "brew install opencv"

        3. Configure project hagiarchy. (Folder layout ect.)

        4. create a new file in the project directory named "CMakLists.txt". Copy and paste the following code

                "cmake_minimum_required(VERSION 3.10)
                project(MyProject)
                find_package(OpenCV REQUIRED)
                add_executable(MyProject main.cpp)
                target_link_libraries(MyProject ${OpenCV_LIBS})"

        5. Create build directory using "touch build" in the terminal. (create this directory in the project directory)

        6. "cd build"

        7. Make the build using "make" command in the terminal.

        8. using "./MyProject" in the terminal compile the project.

    For WindowsOS:

        N/A

- [Usage](#usage)

- [Configuration](#configuration)

- [Contributing](#contributing)

- [License](#license)

- [Credits](#credits)

- [Documentation](#documentation)

Contact Information:
    Christian Brown -> Christianhazebrown@gmail.com 
