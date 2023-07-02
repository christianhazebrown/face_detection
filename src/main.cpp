#include <iostream>
#include <FaceDetector.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv){
    VideoCapture video_capture; // creates video_capture object
    if(!video_capture.open(0)){ // try and open first camera it finds
        return 0;
    }
    FaceDetector face_detector;
    Mat frame;
     while (true) {
         video_capture >> frame;
         auto rectangles = face_detector.detect_face_rectangles(frame);
         Scalar color(0, 105, 205);
         int frame_thickness = 4;
         for(const auto & r : rectangles){
             rectangle(frame, r, color, frame_thickness);
         }
         imshow("Image", frame);
         const int esc_key = 27;
         if (waitKey(10) == esc_key) {
             break;
         }
     }
     destroyAllWindows();
     video_capture.release();
     return 0;
 }