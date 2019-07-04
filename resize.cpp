#include<iostream>
#include<string>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;
/*
static void helptext();

static void helptext() {
	printf("pyr&resize model");
	printf(	"[ese] quit/n"
				"[1] resize large/n"
				"[2] resize small/n"
				"[3] pyrup/n"
				"[4] pyrdown/n"
	);
}

int main() {

	helptext();

	Mat src = imread("pic4.jpg");
	Mat resizeup, resizedown, pyrup, pyrdown;

	namedWindow("origin");
	imshow("origin", src);

	int key = 0;

	while (1) {
		key=waitKey();
		switch (key)
		{
		case 32:
			return 0;
			break;
		case 49:
			resize(src, resizeup, Size(), 1.5, 1.5);
			imshow("sizeup", resizeup);
			src = resizeup;
			break;
		case 50:
			resize(src, resizedown, Size(), 0.5, 0.5);
			imshow("sizedown", resizedown);
			src = resizedown;
			break;
		case 51:
			pyrUp(src, pyrup, Size(src.cols * 2, src.rows * 2));
			imshow("pyrup", pyrup);
			src = pyrup;
			break;
		case 52:
			pyrDown(src, pyrdown, Size(src.cols / 2, src.cols / 2));
			imshow("pyrdown", pyrdown);src = resizeup;
			src = pyrup;
			break;
		}
	}
	return 0;
}
*/