/**
 * @file Flight.h
 * @author 6D92EC
 * @date 2026-02-18
 * @brief Header file for the Flight class in the Ticket System
 */
#ifndef FLIGHT_H
#define FLIGHT_H

#include "Ticket.h"
#include <string>
/**
 * @class Flight
 * @brief Represents a flight ticket. It's a child class of Ticket, 
 * and uses data from that class for customerName and basePrice
 */
class Flight : public Ticket{
    private:
        std::string flightNumber;
        std::string seatNumber;

    public:
        Flight(const std::string& customerName, double basePrice, const std::string& flightNumber, const std::string& seatNumber);

        void printTicket() const;

};

#endif 