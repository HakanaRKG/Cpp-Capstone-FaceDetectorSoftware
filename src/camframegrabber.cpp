
#include "camframegrabber.hpp"

CamFrameGrabber::CamFrameGrabber(){
    OpenCameraConnection(camera_id_);
}
CamFrameGrabber::CamFrameGrabber(uint camera_id) : camera_id_(camera_id) {
    OpenCameraConnection(camera_id_);
}   
CamFrameGrabber::~CamFrameGrabber(){
    capture_instance_.release();
}
void CamFrameGrabber::OpenCameraConnection(uint camera_id){
    capture_instance_.open(camera_id);
    if ( ! capture_instance_.isOpened() )
    {
        //cout << "--(!)Error opening video capture\n";
        log_instance_.LogError("Error opening video capture!! camera id : " + std::to_string(camera_id));
    } else
    {
        log_instance_.LogInfo("Camera initialization succesfull with camera id " + std::to_string(camera_id));
    }
}
bool CamFrameGrabber::ImageIsCapturing(){
    return capture_instance_.read(_current_frame);
}