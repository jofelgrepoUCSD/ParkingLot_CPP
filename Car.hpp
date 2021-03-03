#ifndef CAR_H
#define CAR_H

#include "Enums.hpp"
#include "Vehicle.hpp"
#include <string>
#include <iostream>

class Car : public Vehicle {
    public:
        // Constructor that calls vehicle
        Car(int vehicle_number, int vehicle_type,int parking_spot, int ticket) : 
        Vehicle(vehicle_number,vehicle_type, parking_spot, ticket) {};
        void parkingCharge(){
            std::cout << "Parking fee is $5" << std::endl;
        }
};

#endif
