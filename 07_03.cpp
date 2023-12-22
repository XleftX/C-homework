#include <opencv2/opencv.hpp>

int main() {
    // 加载图像
    cv::Mat image = cv::imread("image.jpg", cv::IMREAD_COLOR);

    // 检测图像边缘
    cv::Mat edges;
    cv::Canny(image, edges, 100, 200);

    // 进行膨胀操作
    cv::Mat dilated;
    cv::dilate(edges, dilated, cv::Mat());

    // 进行侵蚀操作
    cv::Mat eroded;
    cv::erode(dilated, eroded, cv::Mat());

    // 改变图像大小，缩放为50%
    cv::Mat resized;
    cv::resize(image, resized, cv::Size(), 0.5, 0.5);

    // 显示原始图像和处理后的图像
    cv::imshow("Original Image", image);
    cv::imshow("Edges", edges);
    cv::imshow("Dilated", dilated);
    cv::imshow("Eroded", eroded);
    cv::imshow("Resized", resized);
    cv::waitKey(0);

    return 0;
}