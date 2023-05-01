#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;
void main() {

	string path = "Resources/tar.jpg";
	Mat img = imread(path);
	Mat imgGray, imgBlur, imgCanny, imgDil, imgErode, img2;

	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	GaussianBlur(img, imgBlur, Size(3, 3), 3, 0);
	Canny(imgBlur, imgCanny, 25, 75);

	//Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
	//dilate(imgCanny, imgDil, kernel);
	//erode(imgDil, imgErode, kernel);
	resize(img, img2, Size(), 0.2, 0.2);
	imshow("image", img2);
	waitKey(0);

}
