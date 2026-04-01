/**
 * @file Cruise.h
 * @author 6D92EC
 * @date 2026-02-24
 * @brief Header file for the Cruise class in the Ticket System
 */
#ifndef CRUISE_H
#define CRUISE_H

#include "Ticket.h"
#include <string>
/**
 * @class Cruise
 * @brief Represents a cruise ticket with cabinType and shipName as private 
 * variables. It's the child class of Ticket and uses its protected members for the Cruise constructor.
 * Overrides the virtual function printTicket from the Ticket class. 
 */
class Cruise : public Ticket{
    private:
        std::string shipName;
        std::string cabinType;

    public:
        Cruise(const std::string& customerName, double basePrice,const std::string& shipName,const std::string& cabinType);

        void printTicket() override;
};

#endif