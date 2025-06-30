#ifndef destop_hpp
#define desktop_hpp


#include <iostream>
#include <string>
using namespace std;

class Desktop
{

    string mouse;
    string keyboard;
    string monitor;
    string CPU;

public:

    void setMouse(string pMouse);
    void setKeyBoard(string pKeyBoard);
    void setMonitor(string pMonitor);
    void setCPU(string pCPU);
    void showSpecs();

};

#endif