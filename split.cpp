#include<iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include <cv.h>
#include <highgui.h>

using namespace std;
using namespace cv;
/*
bool split_bgr();

int main() {
	system("color 5E");
	if (split_bgr()) { printf("done"); }
	else printf("error");
	waitKey();
	return 0;
}

bool split_bgr() {
	//READ
	Mat pic = imread("pic2.jpg");
	Mat logo = imread("pic.jpg", 0);
	vector<Mat> channels;
	if (!pic.data) { printf("Oh£¨no£¨∂¡»°logoImage¥ÌŒÛ~£°\n"); return false; }
	if (!logo.data) { printf("Oh£¨no£¨∂¡»°srcImage¥ÌŒÛ~£°\n"); return false; }

	//BLUE
	Mat B;
	split(pic, channels);
	B = channels.at(0);
	addWeighted(B(Rect(0, 0, logo.cols, logo.rows)), 1.0, logo, 0.5, 0, B(Rect(0, 0, logo.cols, logo.rows)));
	merge(channels, pic);
	namedWindow("split_B");
	imshow("split_B", pic);

	//GREEN
	pic = imread("pic2.jpg");
	logo = imread("pic.jpg", 0);
	Mat G;
	split(pic, channels);
	G = channels.at(1);
	addWeighted(G(Rect(0, 0, logo.cols, logo.rows)), 1.0, logo, 0.5, 0, G(Rect(0, 0, logo.cols, logo.rows)));
	merge(channels, pic);
	namedWindow("split_G");
	imshow("split_G", pic);

	//RED
	pic = imread("pic2.jpg");
	logo = imread("pic.jpg", 0);
	Mat R;
	split(pic, channels);
	R = channels.at(2);
	addWeighted(R(Rect(0, 0, logo.cols, logo.rows)), 1.0, logo, 0.5, 0, R(Rect(0, 0, logo.cols, logo.rows)));
	merge(channels, pic);
	namedWindow("split_R");
	imshow("split_R", pic);
	return true;
}
*/