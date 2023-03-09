
#include "framegrabber.hpp"

FrameGrabber::FrameGrabber(){}

FrameGrabber::~FrameGrabber() {}

cv::Mat FrameGrabber::GetFrame(){
    return _current_frame;
}