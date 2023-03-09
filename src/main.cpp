#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"
#include "logprovider.hpp"
#include "camframegrabber.hpp"
#include "imageframegrabber.hpp"
#include "facedetector.hpp"
#include <iostream>


INITIALIZE_EASYLOGGINGPP

using namespace std;
using namespace cv;
const String keys =
    "{help h usage ?    |       | print this message   }"
    "{@image1           |       | image1 for compare   }"
    "{camera            |0      |Camera device number. }"
    ;
int main( int argc, const char** argv )
{
    Mat main_frame;
    Mat frame_edited;
    LogProvider logger_instance;
    CommandLineParser parser(argc, argv, keys);
    parser.printMessage();

    FaceDetector face_detector_instance;

    string image_path = parser.get<string>("@image1");
    cout << image_path << endl;
    logger_instance.LogInfo("Image path given is " + image_path);
   
    if (!parser.has("@image1")){
        int camera_device = parser.get<int>("camera");
        CamFrameGrabber frame_grabber_inst(camera_device);

        while ( frame_grabber_inst.ImageIsCapturing() )
        {  
            main_frame = frame_grabber_inst.GetFrame();
            if( main_frame.empty() )
            {
                logger_instance.LogError("No captured frame -- Break!\n");
                break;
            }
            #ifdef debug
            imshow( "Capture - without detection ", main_frame );
            #endif
            //-- 3. Apply the classifier to the frame
            frame_edited = face_detector_instance.DetectFaceAndMark(main_frame);
            imshow( "Capture - with detection ", frame_edited );
            if( waitKey(10) == 27 )
            {
                break; // escape
            }
        }
    }
    else 
    {
        ImageFrameGrabber image_grabber_inst(image_path);
        main_frame =image_grabber_inst.GetFrame();
        
            if( main_frame.empty() )
            {
                logger_instance.LogError("No captured frame -- Break!\n");
                cv::destroyAllWindows();
                return 0;
            }

            //-- 3. Apply the classifier to the frame
            frame_edited = face_detector_instance.DetectFaceAndMark(main_frame);
            imshow( "Capture - with detection ", frame_edited );
        while(true){
            if( waitKey(10) == 27 )
            {
                break; // escape
            }
        }
        
    }
    

    cv::destroyAllWindows();

    return 0;
}