#include <opencv2/opencv.hpp>

int main() {
    // 加载并显示一张图像
    cv::Mat image = cv::imread("image.jpg");
    cv::imshow("Image", image);
    cv::waitKey(0);

    // 加载一个视频
    cv::VideoCapture video("video.mp4");
    cv::Mat frame;
    while (true) {
        video >> frame;
        if (frame.empty()) {
            break;
        }
        cv::imshow("Video", frame);
        if (cv::waitKey(1) == 27) {
            break;
        }
    }

    // 开启计算机摄像头
    cv::VideoCapture camera(0);
    while (true) {
        camera >> frame;
        cv::imshow("Camera", frame);
        if (cv::waitKey(1) == 27) {
            break;
        }
    }

    return 0;
}