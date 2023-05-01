#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;
/////////////////////image////////////////////////

Mat imgHSV;

void main() {

	string path = "Resources2/lambo.png";
	Mat img = imread(path);

	cvtColor(img, imgHSV, COLOR_BGR2HSV);

	namedWindow("Trackbars", (640, 200));


	imshow("image", img);
	imshow("image HSV", imgHSV);
	waitKey(0);
}