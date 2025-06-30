#include "desktop.hpp"

void Desktop::setKeyBoard(string pKeyBoard){
    keyboard=pKeyBoard;
}

void Desktop::setMonitor(string pMonitor){
    keyboard=pMonitor;
}

void Desktop::setMouse(string pMouse){
    keyboard=pMouse;
}

void Desktop::setCPU(string pCPU){
    keyboard=pCPU;
}

void Desktop::showSpecs(){
    cout<<"-----------------------------------"<<endl;
    cout<<mouse<<1<<endl;
    cout<<CPU<<2<<endl;
    cout<<monitor<<3<<endl;
    cout<<keyboard<<4<<endl;
}

 