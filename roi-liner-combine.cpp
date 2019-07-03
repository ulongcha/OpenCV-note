#include<cv.h>
#include<highgui.h>
#include<iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>

/*using namespace std;
using namespace cv;

bool Roi_AddImage();
bool LinerBlending();
bool ROI_LinerBlending();

int main() {
	system("color 5E");
	if (Roi_AddImage() && LinerBlending() && ROI_LinerBlending()) {
		cout << "done" << endl;
	}
	return 0;
}

bool Roi_AddImage() {
	Mat pic = imread("pic2.jpg");
	Mat logo = imread("pic.jpg");
	if (!pic.data) { printf("error"); return false; }
	if (!logo.data) { printf("error"); return false; }

	Mat imageROI = pic(Rect(0, 0, logo.cols, logo.rows));

	Mat mask = imread("pic.jpg", 0);

	logo.copyTo(imageROI, mask);
	namedWindow("ROI-combine");
	imshow("ROI-combine", pic);

	return true;
}

bool LinerBlending() {
	double AlphaValue = 0.5;
	double BetaValue;
	Mat pic, logo, dst;
	pic = imread("pic3.jpg");
	logo = imread("pic4.jpg");
	if (!pic.data) { printf("error"); return false; }
	if (!logo.data) { printf("error"); return false; }

	BetaValue = (1 - 0.5);
	addWeighted(pic, AlphaValue, logo, BetaValue, 0, dst);

	namedWindow("LinerBlending");
	imshow("LinerBlending", dst);

	return true;
}

bool ROI_LinerBlending() {
	Mat pic = imread("pic2.jpg");
	Mat logo = imread("pic.jpg");
	if (!pic.data) { printf("error"); return false; }
	if (!logo.data) { printf("error"); return false; }

	Mat ROI;
	ROI = pic(Rect(0, 0, logo.cols, logo.rows));

	addWeighted(ROI, 0.5, logo, 0.5, 0, ROI);
	namedWindow("roi-liner-combine");
	imshow("roi-liner-combine", pic);
	waitKey();
	return true;
}*/