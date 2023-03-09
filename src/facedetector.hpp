#ifndef FACE_DETECTOR_HPP
#define FACE_DETECTOR_HPP

#include "opencv2/dnn.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "logprovider.hpp"
#include <memory>
#include <string>
#include <vector>
class FaceDetector {
public:
    FaceDetector();
    ~FaceDetector();
    cv::Mat DetectFaceAndMark(const cv::Mat &frame);

private:
    LogProvider log_instance_;

    std::unique_ptr<cv::dnn::Net> network_; // Face detection network
    const int input_image_width_; // Input image width
    const int input_image_height_; // Input image height
    const double scale_factor_; // Scale factor when creating image blob
    const cv::Scalar mean_values_; // Mean normalization values network
    const float confidence_threshold_; // Face detection confidence threshold
};

#endif