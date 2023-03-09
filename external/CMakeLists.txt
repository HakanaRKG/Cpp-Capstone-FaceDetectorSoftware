# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
message("Working on folder: " ${CMAKE_CURRENT_SOURCE_DIR})
set(EASYLOGGING_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/easyloggingpp/src/")
message("Easyloggingpp include directory: " ${EASYLOGGING_INCLUDE_DIR})
file(GLOB EASYLOGGING_SOURCE_FILE
     "${CMAKE_CURRENT_SOURCE_DIR}/easyloggingpp/src/*.h"
     "${CMAKE_CURRENT_SOURCE_DIR}/easyloggingpp/src/*.cc"
)
message("File to be include into executeable: " ${EASYLOGGING_SOURCE_FILE})
#set(EASYLOGGING_SOURCE_FILE "${CMAKE_CURRENT_SOURCE_DIR}/easyloggingpp/src/easylogging++.cc")
#add_library(EASYLOGGING_LIB SHARED ${EASYLOGGING_SOURCE_FILE})
#target_include_directories(${EASYLOGGING_LIB} ${EASYLOGGING_INCLUDE_DIR})
#add_subdirectory(spdlog)