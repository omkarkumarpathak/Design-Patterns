#ifndef DESKTOP_BUILDER_HPP
#define DESKTOP_BUILDER_HPP

#include <iostream>
#include "desktop.hpp"
using namespace std;

class DesktopBuilder
{

protected:
    Desktop *desktop;

public:

    DesktopBuilder()
    {
        desktop = new Desktop();
    }

    virtual void buildMouse() = 0;
    virtual void buildKeyBoard() = 0;
    virtual void buildCPU() = 0;
    virtual void buildMonitor() = 0;

    Desktop *getDesktop()
    {
        return desktop;
    }
};

#endif