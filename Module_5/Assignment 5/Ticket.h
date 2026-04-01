/**
 * @file Ticket.h
 * @author 6D92EC
 * @date 2026-02-24
 * @brief Header file for the Ticket class in the Ticket System
 */
#ifndef TICKET_H
#define TICKET_H

#include <string>
/**
 * @class Ticket
 * @brief Abstract base class using the virtual
 * function printTicket() along with the virtual destructor
 */
class Ticket {
    protected: 
        std::string customerName;
        double basePrice;

    public:
        Ticket(const std::string& customerName, double basePrice);

        virtual ~Ticket() = default;

        virtual void printTicket() = 0;
};

#endif