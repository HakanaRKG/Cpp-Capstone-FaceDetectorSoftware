
#ifndef LOG_WRAPPER_HPP
#define LOG_WRAPPER_HPP

// #define ELPP_FEATURE_ALL
#include "easylogging++.h"
#include <string>
class LogProvider {
public:
    LogProvider();
    ~LogProvider();
    void LogDebug(const std::string &msg);
    void LogError(const std::string &msg);
    void LogInfo(const std::string &msg);
};


#endif