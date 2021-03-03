#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>

class Vehicle {
    public: 
        Vehicle(){};
        Vehicle(int vehicle_number, int vehicle_type, int parking_spot, int ticket){
                this->vehicle_number = vehicle_number;
                this->vehicle_type = vehicle_type;
                this->parking_spot_type = parking_spot;
                this->ticket = ticket;
        }
        int vehicle_number;
        int vehicle_type;
        int ticket;
        int parking_spot_type;
        int ticket_status;
        // Assign random ticket.
        void assignTicket(int ticket){
                this->ticket = ticket;
        }
        int get_Type(){
                return vehicle_type;
        }
        std::string get_TypeSting(){
                
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
        virtual void parkingCharge()=0;
};


#endif
