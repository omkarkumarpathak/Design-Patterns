#include<iostream>
#include "car.hpp"
#include "bike.hpp"  
#include "vehicle.hpp"  

using namespace std;

int main(){

    string vehicleType; 
    
    cout<<"Enter VehicleType:"; cin>>vehicleType;

    Vehicle * vehicle;

    if(vehicleType=="bike"){
        vehicle=new Bike();
    }
    if(vehicleType=="car"){
        vehicle=new Car();
    }

    vehicle->createVehicle();

}