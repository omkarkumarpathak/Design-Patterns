#ifndef logger_hpp
#define logger_hpp

#include<iostream>



using namespace std;

class Logger{

    private:
        Logger();

    public:
        static int count_instance;
        static Logger*loggerInstance;

        static Logger* getLogger();
        

        void log(string msg);
};


#endif