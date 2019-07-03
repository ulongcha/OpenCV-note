#include<iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>


using namespace cv;

/*
int main()
{
	Mat logo = imread("pic.jpg");
	Mat pic = imread("pic2.jpg");
	if (!logo.data) printf("error");
	if (!pic.data) printf("error");

	Mat roi = pic(Rect(0, 0, logo.cols, logo.rows));
	Mat mask = imread("pic.jpg", 0);
	logo.copyTo(roi, mask);

	namedWindow("combine",WINDOW_NORMAL);
	imshow("combine", pic);
	waitKey();

	return 0;
}
*/