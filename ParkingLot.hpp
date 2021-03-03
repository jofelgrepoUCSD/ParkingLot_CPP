#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Enums.hpp"
#include<string>
#include "Vehicle.hpp"
#include<map>

class ParkingLot{

    public:
        // Default ctor
        ParkingLot();
        // Vars
        std::string name;
        int small_count;
        int compact_count;
        int large_count;
        int max_small_count;
        int max_compact_count;
        int max_large_count;
        std::map <int,std::string> active_tickets;
        std::map <int,std::string> parking_history;
        // Functions
        int get_NewParkingTicket(Vehicle &v);
        bool isFull(Vehicle &v);
        void incrementSpot(Vehicle &v);
        void decrementSpot(VehicleType);
        int leaveParking(int ticketNumber);
        std::string getEmptySpot();
};
#endif
