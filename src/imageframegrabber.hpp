#ifndef IMAGE_FRAME_GRABBER_HPP
#define IMAGE_FRAME_GRABBER_HPP

#include "framegrabber.hpp"
#include <opencv2/imgcodecs.hpp>
#include <string>

class ImageFrameGrabber : public FrameGrabber {
public:
    ImageFrameGrabber(std::string image_path);
    ~ImageFrameGrabber();

private:
    std::string _image_path="";
    
};

#endif