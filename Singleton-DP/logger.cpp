#include <iostream>
#include "logger.hpp"
#include <string>

using namespace std;

Logger *Logger::loggerInstance = nullptr;
mutex Logger::mtx;

int Logger::count_instance = 0;

Logger *Logger::getLogger()
{

    if (loggerInstance == nullptr)
    {
        mtx.lock();

        if (loggerInstance == nullptr)
        {
            loggerInstance = new Logger();
        }
        mtx.unlock();
    }

    return loggerInstance;
}

Logger::Logger()
{
    count_instance++;
    cout << "New Instance Created   " << count_instance << endl;
}

void Logger::log(string msg)
{
    cout << msg << endl;
}