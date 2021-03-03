#ifndef TRUCK_H
#define TRUCK_H

#include "Enums.hpp"
#include "Vehicle.hpp"
#include "ParkingLot.hpp"
#include <string>
#include <iostream>

class Truck : public Vehicle {
    public:
        // Constructor that calls Vehicle's ctr
        Truck(int vehicle_number, int vehicle_type,int parking_spot, int ticket) : 
        Vehicle(vehicle_number,VehicleType::TRUCK, parking_spot, ticket) {};

        void parkingCharge(){
            std::cout << "Parking fee is $3" << std::endl;
        }
};

#endif
