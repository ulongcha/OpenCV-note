#include<iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat src = imread("pic5.jpg");
	Mat element;
	Mat dst;
	element = getStructuringElement(MORPH_RECT, Size(15, 15));
	morphologyEx(src, dst, MORPH_DILATE, element);
	namedWindow("open");
	imshow("open", dst);
	waitKey();
	return 0;
}