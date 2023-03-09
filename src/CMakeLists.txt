# CMakeList.txt : CMake project for UdacityCppCapstoneProject, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

find_package( OpenCV REQUIRED )

set(EASYLOGGING_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/external/easyloggingpp/src)
file(GLOB EASYLOGGING_SOURCE_FILE
     "${EASYLOGGING_INCLUDE_DIR}/*.h"
     "${EASYLOGGING_INCLUDE_DIR}/*.cc"
)
message("easylogging include directory: " ${EASYLOGGING_INCLUDE_DIR} )
message("easylogging source files: " ${EASYLOGGING_SOURCE_FILE} )

include_directories(${OpenCV_INCLUDE_DIRS}  ${EASYLOGGING_INCLUDE_DIR} )

file(GLOB SRC_FILE
     "*.hpp"
     "*.cpp"
)
add_executable( ${PROJECT_NAME} 
    ${SRC_FILE}
    ${EASYLOGGING_SOURCE_FILE}
)

target_link_libraries( ${PROJECT_NAME} ${OpenCV_LIBS})
