#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    // 加载图像
    Mat image = imread("1.png", IMREAD_COLOR);
    if (image.empty())
    {
        cout << "无法加载图像" << endl;
        return -1;
    }

    // 将图像转换为灰度图像
    Mat grayImage;
    cvtColor(image, grayImage, COLOR_BGR2GRAY);

    // 将灰度图像二值化
    Mat binaryImage;
    threshold(grayImage, binaryImage, 128, 255, THRESH_BINARY);

    // 对二值化图像进行高斯模糊处理
    Mat blurredImage;    GaussianBlur(binaryImage, blurredImage, Size(5, 5), 0);

    // 显示原始图像和处理后的图像
    namedWindow("Original Image", WINDOW_NORMAL);
    namedWindow("Processed Image", WINDOW_NORMAL);
    imshow("Original Image", image);
    imshow("Processed Image", blurredImage);
    waitKey(0);

    return 0;
}