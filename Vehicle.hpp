#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>

class Vehicle {
    public: 
        Vehicle(){};
        Vehicle(int vehicle_number, int vehicle_type, int parking_spot, int ticket);
        int vehicle_number;
        int vehicle_type;
        int ticket;
        int parking_spot_type;
        int ticket_status;
        // Assign random ticket.
        void assignTicket(int ticket);
        int get_Type();
        std::string get_TypeSting();
        virtual void parkingCharge()=0;
};


#endif
