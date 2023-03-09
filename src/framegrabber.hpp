
#ifndef FRAME_GRABBER_H
#define FRAME_GRABBER_H

#include "opencv2/core/mat.hpp"
class FrameGrabber {
public:
    FrameGrabber();
    virtual ~FrameGrabber() = 0;
    cv::Mat GetFrame();
protected:
    cv::Mat _current_frame;
};

#endif