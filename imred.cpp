#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void main() {

	string path = "Resources/tar.jpg";
	Mat img = imread(path);
	imshow("image", img);
	waitKey(0);



}
