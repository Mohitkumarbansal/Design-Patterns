#include <iostream>
using namespace std;
#include "VehicleFactory.hh"

int main()
{
    string vehicleType;
    cin >> vehicleType;
    VehicleFactory *vehicle_factory = new VehicleFactory();
    Vehicle *vehicle = vehicle_factory->getVehicle(vehicle_type);

    vehicle->createVehicle();

    return (0);
}