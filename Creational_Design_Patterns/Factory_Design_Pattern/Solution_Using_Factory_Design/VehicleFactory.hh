#ifndef vehicleFactory_hpp
#define vehicleFactory_hpp

#include "bike.hh"
#include "car.hh"
#include "vehicle.hh"

class VehicleFactory
{

public:
    Vehicle *getVehicle(string vehicle_type);
}

#endif