#include<iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
/*
using namespace std;
using namespace cv;

int main() {
	Mat src = imread("pic.bmp");
	Mat dst;
	Mat gray, abs_dst;
	imshow("origin", src);
	GaussianBlur(src, src, Size(3, 3), 0, 0);
	cvtColor(src, gray, CV_RGB2GRAY);
	Laplacian(src, dst, CV_16S, 3, 1, 0);
	convertScaleAbs(dst, abs_dst);
	imshow("after", abs_dst);
	waitKey();
}
*/