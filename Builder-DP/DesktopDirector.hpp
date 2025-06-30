#ifndef DESKTOP_DIRECTOR_HPP
#define DESKTOP_DIRECTOR_HPP

#include "desktopBuilder.hpp"

class DesktopDirector
{

protected:

    DesktopBuilder *desktopBuilder;

public:
    
    DesktopDirector(DesktopBuilder * pdesktopBuilder){
        desktopBuilder=pdesktopBuilder;
    }

    Desktop* BuildDesktop(){

        desktopBuilder->buildCPU();
        desktopBuilder->buildKeyBoard();
        desktopBuilder->buildMonitor();
        desktopBuilder->buildMouse();

        return desktopBuilder->getDesktop();

    }

};

#endif