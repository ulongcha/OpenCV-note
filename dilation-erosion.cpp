#include<iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;
/*
Mat src = imread("pic5.jpg");
Mat dst;

int n_element=3;
int mode = 0;

static void dil_ero(int, void*);

int main() {
	namedWindow("after");
	Mat element = getStructuringElement(MORPH_RECT, Size(n_element+1, n_element+1));
	erode(src, dst, element);
	imshow("after", dst);
	createTrackbar("erode&dilate", "after", &mode, 1, dil_ero);
	createTrackbar("element", "after", &n_element, 10, dil_ero);
	waitKey();
	return 0;
}

static void dil_ero(int, void*) {
	Mat element = getStructuringElement(MORPH_RECT, Size(n_element+1 , n_element+1));
	if (mode) {
		dilate(src, dst, element);
	}
	else {
		erode(src, dst, element);
	}
	imshow("after", dst);
}
*/