#include "VehicleFactory.hh"
#include <iostream>

Vehicle *VehicleFactory::getVehicle(string vehicle_type)
{

    if (vehicle_type == "Car")
    {
        return (new Car());
    }
    else if (vehicle_type == "Bike")
    {
        return (new Bike());
    }
    else if (vehicle_type == "Truck")
    {
        return (new truck());
    }
    return (NULL);
}