#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;
void main() {

	string path = "Resources/tar.jpg";
	Mat img = imread(path);
	Mat imgResize, imgCrop;

	cout << img.size() << endl;
	resize(img, imgResize, Size(), 0.5, 0.25);

	Rect roi(10, 10, 100, 100);
	imgCrop = img(roi);

	imshow("image", imgResize);
	imshow("image Crop", imgCrop);
	
	waitKey(0);
}