#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // Load the Haar cascade classifier for face detection
    string face_cascade_path = "D:/haarcascade_frontalface_default.xml";
    CascadeClassifier face_cascade;
    if (!face_cascade.load(face_cascade_path)) {
        cout << "Error loading face cascade" << endl;
        return -1;
    }

    // Read the input image
    string image_path = "Resources/tar.jpg";
    Mat image = imread(image_path);
    if (image.empty()) {
        cout << "Error loading image" << endl;
        return -1;
    }

    // Convert the image to grayscale
    Mat gray;
    cvtColor(image, gray, COLOR_BGR2GRAY);
    equalizeHist(gray, gray);

    // Detect faces in the image
    vector<Rect> faces;
    face_cascade.detectMultiScale(gray, faces, 1.1, 3, 0, Size(30, 30));

    // Draw rectangles around the detected faces
    for (size_t i = 0; i < faces.size(); i++) {
        rectangle(image, faces[i], Scalar(0, 255, 0), 2);
    }

    // Display the resulting image
    imshow("Face Detection", image);
    waitKey(0);

    return 0;
}
