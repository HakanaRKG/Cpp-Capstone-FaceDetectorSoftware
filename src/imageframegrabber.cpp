
#include "imageframegrabber.hpp"

ImageFrameGrabber::ImageFrameGrabber(std::string image_path):_image_path(image_path){
    _current_frame = cv::imread(_image_path);
}

ImageFrameGrabber::~ImageFrameGrabber(){

}