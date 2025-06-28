#include <iostream>
#include "Factory.hpp"
#include "bike.hpp"
#include "car.hpp"

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

    return vehicle;

}
