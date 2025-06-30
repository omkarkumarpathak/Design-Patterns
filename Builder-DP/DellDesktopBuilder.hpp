#ifndef DellDesktopBuilder_hpp
#define DellDesktopBuilder_hpp


#include "desktopBuilder.hpp"

class DellDesktopBuilder : public DesktopBuilder
{

public:
    void buildMouse();
    void buildKeyBoard();
    void buildCPU();
    void buildMonitor();

};

#endif