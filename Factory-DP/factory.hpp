#ifndef vehicle_factory_hpp
#define vehicle_factory_hpp

#include <iostream> 
#include "vehicle.hpp"
using namespace std;

class Factory : public Vehicle
{

public:
    static Vehicle *getVehicle(string vehicleType);
};

#endif