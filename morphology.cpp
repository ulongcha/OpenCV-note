#include<iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

Mat src = imread("pic5.jpg");
Mat dst;

int n_dil_ero = 3;
int n_open_close = 3;
int n_top_black = 3;
int mode_de = 0;
int mode_oc = 0;
int mode_tb = 0;

static void dil_ero(int, void*);
static void open_close(int, void*);
static void top_black(int, void*);

int main() {
		namedWindow("erode&dilate");
		Mat element = getStructuringElement(MORPH_RECT, Size(n_dil_ero + 1, n_dil_ero + 1));
		erode(src, dst, element);
		imshow("erode&dilate", dst);
		createTrackbar("erode&dilate", "erode&dilate", &mode_de, 1, dil_ero);
		createTrackbar("element", "erode&dilate", &n_dil_ero, 10, dil_ero);

		namedWindow("open&close");
		element = getStructuringElement(MORPH_RECT, Size(n_open_close + 1, n_open_close + 1));
		morphologyEx(src, dst, MORPH_OPEN,element);
		imshow("open&close", dst);
		createTrackbar("erode&dilate", "open&close", &mode_oc, 1, open_close);
		createTrackbar("element", "open&close", &n_open_close, 10, open_close);

		namedWindow("top&black");
		element = getStructuringElement(MORPH_RECT, Size(n_top_black + 1, n_top_black + 1));
		morphologyEx(src, dst, MORPH_BLACKHAT, element);
		imshow("top&black", dst);
		createTrackbar("erode&dilate", "top&black", &mode_tb, 1, top_black);
		createTrackbar("element", "top&black", &n_top_black, 10, top_black);

		waitKey();
		return 0;
}

static void dil_ero(int, void*) {
	Mat element = getStructuringElement(MORPH_RECT, Size(n_dil_ero + 1, n_dil_ero + 1));
	if (mode_de) {
		dilate(src, dst, element);
	}
	else {
		erode(src, dst, element);
	}
	imshow("erode&dilate", dst);
}

static void open_close(int, void*) {
	Mat element = getStructuringElement(MORPH_RECT, Size(n_open_close + 1, n_open_close + 1));
	if (mode_oc) {
		morphologyEx(src, dst, MORPH_OPEN, element);
	}
	else {
		morphologyEx(src, dst, MORPH_CLOSE, element);
	}
	imshow("open&close", dst);
}

static void top_black(int, void*) {
	Mat element = getStructuringElement(MORPH_RECT, Size(n_top_black + 1, n_top_black + 1));
	if (mode_tb) {
		morphologyEx(src, dst, MORPH_BLACKHAT, element);
	}
	else {
		morphologyEx(src, dst, MORPH_TOPHAT, element);
	}
	imshow("top&black", dst);
}
