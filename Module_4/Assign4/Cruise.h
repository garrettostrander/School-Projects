/**
 * @file Cruise.h
 * @author 6D92EC
 * @date 2026-02-18
 * @brief Header file for the Cruise class in the Ticket System
 */
#ifndef CRUISE_H
#define CRUISE_H

#include <string>
#include "Ticket.h"
/**
 * @class Cruise
 * @brief Represents a cruise ticket with cabinType and shipName as private 
 * variables. It's the child class of Ticket and uses its protected members for the Cruise constructor.
 */
class Cruise : public Ticket{
    private:
        std::string cabinType;
        std::string shipName;

    public: 
        Cruise(const std::string& cutomerName, double basePrice, const std::string& cabinType, const std::string& shipName);

        void printTicket() const;

};

#endif