#include<opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

/*int main() {
	Mat pic1, pic2, dst;
	double alphaValue = 0.3;
	double betaValue;

	pic1 = imread("pic3.jpg");
	pic2 = imread("pic4.jpg");
	if (!pic1.data) { printf("error");	return false; }
	if (!pic2.data) { printf("error");	return false; }

	betaValue = (1 - alphaValue);
	addWeighted(pic1, alphaValue, pic2, betaValue, 0, dst);

	namedWindow("linercombine");
	imshow("linercombine", dst);
	waitKey();
	return 0;
}*/