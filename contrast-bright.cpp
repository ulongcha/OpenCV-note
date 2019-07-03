#include<iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;
/*
static void ContrastAndBright(int, void*);

int contrast;
int bright;
Mat pic, dst;

int main() {
	system("color 5E");
	pic = imread("pic4.jpg");
	if (!pic.data) { printf("error"); return false; }
	dst = Mat::zeros(pic.size(), pic.type());
	contrast = 80;
	bright = 80;
	namedWindow("con&bri");
	createTrackbar("contrast:", "con&bri", &contrast, 300, ContrastAndBright);
	createTrackbar("bright:", "con&bri", &bright, 300, ContrastAndBright);

	ContrastAndBright(contrast, 0);
	ContrastAndBright(bright, 0);
	printf("done");
	waitKey();
	return 0;
}

static void ContrastAndBright(int, void*) {
	namedWindow("before");
	
	for (int y = 0; y < pic.rows; y++) {
		for (int x = 0; x < pic.cols; x++) {
			for (int c = 0; c < 3; c++) {
				dst.at<Vec3b>(y, x)[c] = saturate_cast<uchar>((contrast * 0.01) * pic.at<Vec3b>(y, x)[c] + bright);
			}
		}
	}
	imshow("before", pic);
	imshow("con&bri", dst);
}
*/