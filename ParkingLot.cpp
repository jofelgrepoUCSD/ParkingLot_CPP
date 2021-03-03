#include "Enums.hpp"
#include "ParkingLot.hpp"
#include "Vehicle.hpp"
#include<string>
#include<iostream>
#include <cstdlib>
#include <chrono>

using namespace std;
using namespace std::chrono;

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

   if (this->isFull(v)){
      std::cout << "Sorry All Slots Are Taken\n " << endl;
      std::cout << "-------------------------\n " << endl;
      return 0;
   }
   // Tickets now depend on the time you parked
   long value_ms = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::time_point_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now()).time_since_epoch()).count();
   int gen_ticket = value_ms;


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

void ParkingLot::decrementSpot(string s){
   if (s == "MotorBike"){
      this->small_count -= 1;
   } else if (s == "Car"){
      this->compact_count -= 1;
   } else {
      this->large_count -= 1;
   }
}



bool ParkingLot::isFull(Vehicle &v){
   
   int vehicle_type = v.get_Type();

   if (vehicle_type == 1){
      return this->small_count >= this->max_small_count; 
   }
   if (vehicle_type == 2){
      return this->compact_count >= this->max_compact_count; 
   }
   if (vehicle_type == 3){
      return this->large_count >= this->max_large_count; 
   }
   return 1;
}



std::string ParkingLot::getEmptySpot(){

   string message = "";

   int available_small = this->max_small_count - this->small_count;
   if (available_small > 0){
      message = message + "Free small:" + to_string(available_small) +"\n"; 
   } else {
      message = message + "Small is full\n";
   }

   int available_compact = this->max_compact_count - this->compact_count;
   if (available_compact > 0){
      message = message + "Free compact:" + to_string(available_compact) + "\n"; 
   } else {
      message = message + "Compact is full\n";
   }

   int available_large = this->max_large_count - this->large_count;
   if (available_large > 0){
      message = message + "Free Large:" + to_string(available_large)+"\n"; 
   } else {
      message = message + "Large is full\n";
   }

   return message;
}

int ParkingLot::leaveParking(int ticketNumber){

   if ( !(this->active_tickets.find(ticketNumber) == this->active_tickets.end()) ) {
      auto vehicle = this->active_tickets[ticketNumber];
      this->decrementSpot(vehicle);
      this->active_tickets.erase(ticketNumber);
   } else {
      // not found
   }
   return 1;


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