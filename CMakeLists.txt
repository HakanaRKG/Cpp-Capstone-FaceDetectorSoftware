# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project ("UdacityCppCapstoneProject")

# Include sub-projects.
add_subdirectory ("external")
add_subdirectory ("src")

# Introduce preprocessor variables to keep paths of asset files
set(FACE_DETECTION_CONFIGURATION
"${PROJECT_SOURCE_DIR}/assets/deploy.prototxt")

set(FACE_DETECTION_WEIGHTS
"${PROJECT_SOURCE_DIR}/assets/res10_300x300_ssd_iter_140000_fp16.caffemodel")

target_compile_definitions(${PROJECT_NAME} PRIVATE 
FACE_DETECTION_CONFIGURATION="${FACE_DETECTION_CONFIGURATION}")

target_compile_definitions(${PROJECT_NAME} PRIVATE 
FACE_DETECTION_WEIGHTS="${FACE_DETECTION_WEIGHTS}")
