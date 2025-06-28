#include<iostream>

#include "logger.hpp"

int main(){

    Logger* logger1= Logger::getLogger();

    logger1->log("Mesg from User-1");

}