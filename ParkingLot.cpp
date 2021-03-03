#include "Enums.hpp"
#include "ParkingLot.hpp"
#include "Vehicle.hpp"
#include<string>
#include<iostream>
#include <cstdlib>

using namespace std;

ParkingLot::ParkingLot(){

    this->name = "none";
    this->small_count = 0;
    this->compact_count = 0;
    this->large_count = 0;
    this->max_small_count = 2;
    this->max_compact_count = 2;
    this->max_large_count = 1;
}

int ParkingLot::get_NewParkingTicket(Vehicle &v){

    int gen_ticket = rand()*rand()*69;
    // Assign the random ticket for vehicle
    v.assignTicket(gen_ticket);
    this->incrementSpot(v);
    // Add to map
    this->active_tickets[gen_ticket] = v.get_TypeSting(); 
    this->parking_history[gen_ticket] = v.get_TypeSting();
    return gen_ticket;
    
}
void ParkingLot::incrementSpot(Vehicle &v){
   
    int vehicle_type = v.get_Type();

    switch(vehicle_type) {
      case 1 :
            this->small_count += 1;
         break;
      case 2 :
            this->compact_count += 1;
         break;
      case 3 :
            this->large_count += 1;
         break;
   }
}

// class ParkingLot{

//     public:
//         ParkingLot(std::string name);
//         int small_count;
//         int compact_count;
//         int large_count;
//         int max_small_count;
//         int max_compact_count;
//         int max_large_count;
//         int get_NewParkingTicket(VehicleType);
//         bool isFull(VehicleType);
//         void incrementSpot(VehicleType);
//         void decrementSpot(VehicleType);
//         int leaveParking(int ticketNumber);
//         std::string getEmptySpot();
// };