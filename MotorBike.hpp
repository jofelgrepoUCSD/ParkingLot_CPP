#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Enums.hpp"
#include "Vehicle.hpp"
#include "ParkingLot.hpp"
#include <string>
#include <iostream>

class MotorBike : public Vehicle {
    public:
        // Constructor that calls Vehicle's ctr
        MotorBike(int vehicle_number, int vehicle_type,int parking_spot, int ticket) : 
        Vehicle(vehicle_number,VehicleType::MOTORBIKE, parking_spot, ticket) {};

        void parkingCharge(){
            std::cout << "Parking fee is $3" << std::endl;
        }
};

#endif
