/**
 * @file Flight.h
 * @author 6D92EC
 * @date 2026-02-24
 * @brief Header file for the Flight class in the Ticket System
 */
#ifndef FLIGHT_H
#define FLIGHT_H

#include "Ticket.h"

#include <string>
/**
 * @class Flight
 * @brief Child class of Ticket. It accesses the public data from the ticket
 * class and overrides the virtual function.
 */
class Flight : public Ticket {
    private: 
        std::string flightNumber;
        std::string seatNumber;
    
    public: 
        Flight(const std::string& customerName, double basePrice,const std::string& flightNumber,const std::string& seatNumber);

        void printTicket() override;
};

#endif