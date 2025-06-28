#ifndef logger_hpp
#define logger_hpp

#include<iostream>
using namespace std;

class Logger{
    public:
        static int count_instance;
        
        Logger();
        void log(string msg);

};


#endif