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