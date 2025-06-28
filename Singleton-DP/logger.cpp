#include<iostream>
#include "logger.hpp"
#include<string>

using namespace std;

Logger* Logger::loggerInstance=nullptr;

int Logger::count_instance=0;

Logger* Logger::getLogger(){

    if(loggerInstance==nullptr){
        loggerInstance=new Logger();
    }
    return loggerInstance;
}

Logger::Logger(){
    count_instance++;
    cout<<"New Instance Created   "<<count_instance<<endl;
}

void Logger::log(string msg){
    cout<<msg<<endl;
}