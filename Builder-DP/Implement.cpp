#include "hppDesktopBuilder.hpp"
#include "DellDesktopBuilder.hpp"
#include "DesktopDirector.hpp"

int main(){

    hppDesktopBuilder* hppBuilder=new hppDesktopBuilder();
    DellDesktopBuilder* dellBuilder=new DellDesktopBuilder();

    DesktopDirector* director1=new DesktopDirector(hppBuilder);
    DesktopDirector* director2=new DesktopDirector(dellBuilder);

    Desktop* desktop1=director1->BuildDesktop();
    Desktop* desktop2=director2->BuildDesktop();

    desktop1->showSpecs();
    desktop2->showSpecs();

    return 0;

}