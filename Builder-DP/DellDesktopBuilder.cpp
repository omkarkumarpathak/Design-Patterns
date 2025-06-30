#ifndef dellDesktopBuilder_hpp
#define dellDesktopBuilder_hpp

#include "DellDesktopBuilder.hpp"

void DellDesktopBuilder::buildCPU(){
    desktop->setCPU("Dell CPU");
}

void DellDesktopBuilder::buildKeyBoard(){
    desktop->setKeyBoard("Dell Keyboard");
}

void DellDesktopBuilder::buildMonitor(){    
    desktop->setMonitor("Dell Monitor");
}

void DellDesktopBuilder::buildMouse(){
    desktop->setMouse("Dell Mouse");
}

#endif