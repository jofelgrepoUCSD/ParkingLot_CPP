#include "Enums.hpp"
#include "ParkingLot.hpp"
#include "Vehicle.hpp"
#include<string>
#include<iostream>
#include <cstdlib>

using namespace std;

Vehicle::Vehicle(int vehicle_number, int vehicle_type, int parking_spot, int ticket){
    this->vehicle_number = vehicle_number;
    this->vehicle_type = vehicle_type;
    this->parking_spot_type = parking_spot;
    this->ticket = ticket;
}

void Vehicle::assignTicket(int ticket){
    this->ticket = ticket;
}

int Vehicle::get_Type (){
    return this->vehicle_type;
}

std::string Vehicle:: get_TypeSting() {

    int vehicle_type = this->get_Type();
    switch(vehicle_type) {
        case 1 :
            return "MotorCycle";
        case 2 :
            return "Car";
        case 3 :
            return "Truck";
    }
    return "";
}