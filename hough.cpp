#include<iostream>
#include<string>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat src = imread("pic4.jpg");
	Mat dst, temp1,temp2,element;
	
	element = getStructuringElement(MORPH_RECT, Size(7, 7));
	morphologyEx(src, temp1, MORPH_OPEN, element);
	imshow("open&close", temp1);

	Canny(temp1, temp2, 70, 140, 3);
	cvtColor(temp2, dst, CV_GRAY2BGR);
	imshow("temp", temp2);
	vector<Vec2f> lines;
	HoughLines(temp2, lines, 1, CV_PI / 180, 205,0, 0);
	for (size_t i = 0; i < lines.size(); i++) {
		float rho = lines[i][0], theta = lines[i][1];
		Point pt1, pt2;
		double a = cos(theta);
		double b = sin(theta);
		double x0 = a * rho, y0 = b * rho;
		pt1.x = cvRound(x0 + 1000 * (-b));
		pt1.y = cvRound(y0 + 1000 * a);
		pt2.x = cvRound(x0 - 1000 * (-b));
		pt2.y = cvRound(y0 - 1000 * a);
		line(dst, pt1, pt2, Scalar(55, 100, 195), 1, CV_AA);
	}
	imshow("dst", dst);
	waitKey();
	return 0;
}
