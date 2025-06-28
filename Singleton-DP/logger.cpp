#include<iostream>
#include "logger.hpp"
#include<string>

using namespace std;

int Logger::count_instance=0;

Logger::Logger(){
    count_instance++;
    cout<<"New Instance Created"<<count_instance<<endl;
}

void Logger::log(string msg){
    cout<<msg<<endl;
}