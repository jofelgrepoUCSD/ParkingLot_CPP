#include <iostream>
#include <ostream>
#include "Enums.hpp"
#include "MotorBike.hpp"
#include "Truck.hpp"
#include "Car.hpp"
#include "Vehicle.hpp"
#include "ParkingLot.hpp"
#include <string>
#include <stdlib.h>

using namespace std;

/*
    VEHICLE TYPES:
    1 = MOTOR
    2 = CAR
    3 = TRUCK
*/


int main(){


    ParkingLot *parking = new ParkingLot();
    while(true){
    
        int choice;
        cout << "Enter Parking choice.\n"
                "1 Parking entry Gate.\n"
                "2 Parking exit Gate.\n"
                "3 Check parking status.\n"
                "4 Check vehicle status.\n" << endl; 
        cin >> choice; 
        cout << "\033[2J\033[1;1H";
    
        // Choice is 1
        if (choice == 1){
            Vehicle *v;
            int vehicleType;
            cout << "Enter vehicle type.\n"
                "1 MotorCycle.\n"
                "2 Car.\n"
                "3 Truck.\n" << endl; 
            cin >> vehicleType;
            cout << "\033[2J\033[1;1H";
            if (vehicleType > 3 || vehicleType < 1){
                std:: cout << "Invalid vehicle type" << std::endl;
                exit(0);
            } else {
                if (vehicleType == 1){
                    // A motor Cycle
                    v = new MotorBike(1,vehicleType,3,4);
                } else if (vehicleType == 2){
                    // A Car
                    v = new Car(1,vehicleType,3,4);
                } else {
                    // A truck
                    v = new Truck(1,vehicleType,3,4);
                }
                int ticketNumber = parking->get_NewParkingTicket(*v);

                // tickeNumber is 0 when full
                if (ticketNumber == 0){
                    continue;
                }
                std::cout << ticketNumber << std::endl;
                std::cout << parking->getEmptySpot() << std::endl;
              
            }
        } 
        // End of choice 1

        if( choice == 2){
            int ticket_number;
            cout << "Enter ticket number: " << endl;
            cin >> ticket_number;

            int vehicle_name = parking->leaveParking(ticket_number);
            std::cout << parking->getEmptySpot() << std::endl;
        }


    }
}








    // // Car example
    // int vehicle_type1 = 2;
    // Car *c1 = new Car(1,vehicle_type1,3,4);
    // int ticketNumber = parking->get_NewParkingTicket(*c1);
    // std::cout << ticketNumber << std::endl;
    // std::cout << parking->getEmptySpot() << std::endl;
    
    // int vehicle_type2 = 2;
    // Car *c2 = new Car(1,vehicle_type2,3,4);
    // int ticketNumber2 = parking->get_NewParkingTicket(*c2);
    // std::cout << ticketNumber << std::endl;
    // std::cout << parking->getEmptySpot() << std::endl;




    // std::cout << v->vehicle_number << endl;
    // std::cout << v->vehicle_type << endl;
    // std::cout << v->ticket << endl;
    // std::cout << v->parking_spot_type << endl;
    
    // v->parkingCharge();



