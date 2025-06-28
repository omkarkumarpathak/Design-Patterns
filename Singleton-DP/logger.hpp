#ifndef logger_hpp
#define logger_hpp

#include<iostream>
#include <mutex>
using namespace std;

class Logger{

    private:
        Logger();

    public:
        static int count_instance;
        static mutex mtx;
        static Logger*loggerInstance;
        static Logger* getLogger();
    
        void log(string msg);
};

#endif