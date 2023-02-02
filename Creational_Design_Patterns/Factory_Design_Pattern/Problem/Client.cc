#include <iostream>
using namespace std;
#include "bike.hh"
#include "car.hh"

int main()
{
    string vehicleType;
    cin >> vehicleType;
    Vehicle *vehicle;
    if (vehicleType == "car")
    {
        vehicle = new Car();
    }
    else if (vehicleType == "bike")
    {
        vehicle = new Bike();
    }
    vehicle->createVehicle();

    return (0);
}