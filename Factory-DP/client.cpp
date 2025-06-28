#include<iostream>  
#include "factory.hpp"
#include "vehicle.hpp"

using namespace std;

int main(){

    string vehicleType; 
    cout<<"Enter VehicleType:"; cin>>vehicleType;

    Vehicle *vehicle=Factory::getVehicle(vehicleType);

    vehicle->createVehicle();

    return 0;

}