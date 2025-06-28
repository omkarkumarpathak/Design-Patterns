#include <iostream>
#include "Factory.hpp"
#include "bike.hpp"
#include "car.hpp"
#include "aero.hpp"

using namespace std;

Vehicle *Factory::getVehicle(string vehicleType)
{

    Vehicle * vehicle;

    if (vehicleType == "bike")
    {
        vehicle = new Bike();
    }
    if (vehicleType == "car")
    {
        vehicle = new Car();
    }
     if (vehicleType == "aero")
    {
        vehicle = new Aero();
    }

    return vehicle;

}
