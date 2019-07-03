#include<iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;
/*
Mat pic, m_box, m_blur, m_gauss, m_median, m_bilateral;
int box = 3;
int nblur = 3;
int gauss = 3;
int median = 1;
int bilateral = 3;

static void f_box(int, void*);
static void f_blur(int, void*);
static void f_gauss(int, void*);
static void f_median(int, void*);
static void f_bilateral(int, void*);

int main() {
	pic = imread("pic3.jpg");
	if (!pic.data) { printf("error"); return false; };

	m_box = pic.clone();
	m_blur = pic.clone();
	m_gauss = pic.clone();
	m_median = pic.clone();
	m_bilateral = pic.clone();
	
	namedWindow("before");
	imshow("before", pic);

	namedWindow("box");
	createTrackbar("kernel: ", "box", &box, 9, f_box);
	f_box(box, 0);
	imshow("box", m_box);

	namedWindow("blur");
	createTrackbar("kernel: ", "blur", &nblur, 9, f_blur);
	f_blur(nblur, 0);
	imshow("blur", m_blur);

	namedWindow("gauss");
	createTrackbar("kernel: ", "gauss", &gauss, 15, f_gauss);
	f_gauss(gauss, 0);
	imshow("gauss", m_gauss);

	namedWindow("median");
	createTrackbar("kernel: ", "median", &median, 50, f_median);
	f_median(median, 0);
	imshow("median", m_median);
	
	namedWindow("bilateral");
	createTrackbar("kernel: ", "bilateral", &bilateral, 50, f_bilateral);
	f_bilateral(bilateral, 0);
	imshow("bilateral", m_bilateral);

	printf("done");
	waitKey();
	return 0;
}

static void f_box(int, void*) {
	boxFilter(pic, m_box, -1, Size(box+1, box+1));
	imshow("box", m_box);
}

static void f_blur(int, void*) {
	blur(pic, m_blur, Size(nblur+1, nblur+1));
	imshow("blur", m_blur);
}

static void f_gauss(int, void*) {
	GaussianBlur(pic, m_gauss, Size(gauss*2+1, gauss*2+1), 1, 1);
	imshow("gauss", m_gauss);
}

static void f_median(int, void*) {
	medianBlur(pic, m_median, (median*2+1));
	imshow("median", m_median);
}

static void f_bilateral(int, void*) {
	bilateralFilter(pic, m_bilateral, bilateral, (bilateral*2), (bilateral/2));
	imshow("bilateral", m_bilateral);
}
*/