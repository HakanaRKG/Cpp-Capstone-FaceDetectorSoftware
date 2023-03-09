
#include "logprovider.hpp"

LogProvider::LogProvider(){

}

LogProvider::~LogProvider(){

}

void LogProvider::LogDebug(const std::string &msg){
    LOG(DEBUG) << msg;
}

void LogProvider::LogError(const std::string &msg){
    LOG(ERROR) << msg;
}

void LogProvider::LogInfo(const std::string &msg){
    LOG(INFO) << msg;
}