#include<opencv/opencv.hpp>

using namespace cv;

int main()
{
    Mat src;
    src = imread("1.jpg");
    imshow("img_text",src);
    waitKey(6000);
    return 0;
}