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
    int vehicle_type1 = 2;
    Car *c1 = new Car(1,vehicle_type1,3,4);
    int ticketNumber = parking->get_NewParkingTicket(*c1);
    std::cout << ticketNumber << std::endl;
    std::cout << parking->getEmptySpot() << std::endl;
    
    int vehicle_type2 = 2;
    Car *c2 = new Car(1,vehicle_type2,3,4);
    int ticketNumber2 = parking->get_NewParkingTicket(*c2);
    std::cout << ticketNumber << std::endl;
    std::cout << parking->getEmptySpot() << std::endl;




    // std::cout << v->vehicle_number << endl;
    // std::cout << v->vehicle_type << endl;
    // std::cout << v->ticket << endl;
    // std::cout << v->parking_spot_type << endl;
    
    // v->parkingCharge();



}