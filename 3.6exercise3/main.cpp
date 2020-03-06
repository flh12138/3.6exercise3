#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() 
{
	cv::Mat dispMat = imread("E:\\PIC\\2.png");
	cv::Point pt;
	cv::Point pt1;
	cv::Point pt2;
	pt.x = 10;
	pt.y = 10;
	pt1.x = 0;
	pt1.y = 0;
	pt2.x = 10;
	pt2.y = 10;
	circle(dispMat, pt, 5, CV_RGB(255, 0, 0), 2, 8, 0);

	line(dispMat, pt1, pt2, CV_RGB(0, 0, 255), 2, 8, 0);

	cv::Rect rect;
	rect.x = 10;
	rect.y = 10;
	rect.width;
	rect.height;
	rectangle(dispMat, rect, CV_RGB(0,255, 0), 3, 8, 0);
	namedWindow("disp", 0);
	imshow("disp", dispMat);
	waitKey(0);

}