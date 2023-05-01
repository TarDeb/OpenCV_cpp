#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;
///////////////////////image////////////////////////
//void main() {
//
//	string path = "Resources/tar.jpg";
//	Mat img = imread(path);
//	imshow("image", img);
//	waitKey(0);
//}
// 
// 
///////////////////video///////////////////////////

//void main() {
//
//	string path = "Resources/dji.MP4";
//	VideoCapture cap(path);
//	Mat img;
//
//	while (true) {
//		cap.read(img);
//		imshow("image", img);
//
//		waitKey(20);
//	}
//}


///////////////webCAM/////////////////////////////
void main() {

	
	VideoCapture cap(0);
	Mat img;

	while (true) {
		cap.read(img);
		imshow("image", img);

		waitKey(1);
	}
}