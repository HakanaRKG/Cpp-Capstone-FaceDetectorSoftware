
#ifndef TWO_DIMENSION_FRAME_GRABBER_H
#define TWO_DIMENSION_FRAME_GRABBER_H

#include "framegrabber.hpp"
#include "opencv2/videoio.hpp"
#include "logprovider.hpp"

class CamFrameGrabber : public FrameGrabber {
public:
    CamFrameGrabber();
    CamFrameGrabber(uint);
    ~CamFrameGrabber();

    bool ImageIsCapturing();
    uint GetCurrentCameraId();
private:
    void OpenCameraConnection(uint);
private:
    cv::VideoCapture capture_instance_;
    uint camera_id_ = 0;
    LogProvider log_instance_;
    
};

#endif