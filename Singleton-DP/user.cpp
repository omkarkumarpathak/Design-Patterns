#include<iostream>
#include "logger.hpp"
#include <thread>
using namespace std;

void user1(){

    Logger* logger1= Logger::getLogger();
    logger1->log("Mesg from User-1");
}

void user2(){

    Logger* logger2= Logger::getLogger();
    logger2->log("Mesg from User-2");
}

int main(){

    std::thread t1(user1);
    std::thread t2(user1);

    t1.join();
    t2.join();

    return 0;

}