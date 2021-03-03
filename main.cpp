#include <iostream>
#include <ostream>
#include "Enums.hpp"
#include "Car.hpp"
#include "Vehicle.hpp"
#include "ParkingLot.hpp"
#include <string>

using namespace std;

/*
    VEHICLE TYPES:
    1 = MOTOR
    2 = CAR
    3 = TRUCK
*/


int main(){

    ParkingLot *parking = new ParkingLot();

    // Car example
    int vehicle_type = 2;
    Car *v = new Car(1,vehicle_type,3,4);
    int ticketNumber = parking->get_NewParkingTicket(*v);
    std::cout << ticketNumber << std::endl;



    // std::cout << v->vehicle_number << endl;
    // std::cout << v->vehicle_type << endl;
    // std::cout << v->ticket << endl;
    // std::cout << v->parking_spot_type << endl;
    
    // v->parkingCharge();



}