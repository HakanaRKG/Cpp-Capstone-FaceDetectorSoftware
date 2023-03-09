# CPPND: Capstone face detector project

This is a repository for my capstone project. An attempt to have a more modular image processing software.

Functionalities:
- Face detection and marking it with circle / elipse

## Dependencies for Running Locally
* cmake >= 3.8
    * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
    * Linux: make is installed by default on most Linux distros
    * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
    * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
    * Linux: gcc / g++ is installed by default on most Linux distros
    * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
    * Windows: recommend using [MinGW](http://www.mingw.org/)
* OpenCV >= 4.5.5
    * All OSes: [installation instructions](https://docs.opencv.org/4.x/df/d65/tutorial_table_of_content_introduction.html)
* easyloggingcpp >= v9.97.0
    * Library is included as a submodule in the folder ./external/
    * for more information please read [here](https://github.com/amrayn/easyloggingpp)

## Basic building instruction
1. Clone this repo.
2. Clone the submodule:
    > git submodule init
    > git submodule update
3. Make a build directory in the top level directory: 
    > mkdir build && cd build
4. Compile:
    > cmake .. && make
5. Go to /build/src/ and type:
    > ./UdacityCppCapstoneProject

## How to use this program
This program is a basic software that can use either camera as input or picture from a given path. For test purposes I include a picture in the assets folder.

### To use with image
run the program with command as follows:
> ./UdacityCppCapstoneProject [Path to image]

### To use with camera
run the program without giving any image path