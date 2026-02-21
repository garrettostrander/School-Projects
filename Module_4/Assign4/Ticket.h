/**
 * @file Ticket.h
 * @author 6D92EC
 * @date 2026-02-18
 * @brief This file is for the parent class Ticket in the Ticket System
 */
#ifndef TICKET_H
#define TICKET_H

#include <string>
/**
 * @class Ticket
 * @brief Represents a ticket using customerName and basePrice. It's the 
 * parent class for the Flight and Cruise classes. Uses protected members to allow
 * child classes access to the members. 
 */
class Ticket{
    protected:
        std::string customerName;
        double basePrice;

    public:
        Ticket(const std::string& customerName, double basePrice);

        void printTicket() const;

};


#endif