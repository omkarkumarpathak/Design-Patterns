#include<iostream>

#include "logger.hpp"

int main(){

    Logger* logger1=new Logger();
    logger1->log("Mesg from User-1");

    
    Logger* logger2=new Logger();
    logger1->log("Mesg from User-2");

}