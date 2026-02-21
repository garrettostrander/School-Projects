/**
 * @file Ticket.cpp
 * @author 6D92EC
 * @date 2026-02-18
 * @brief This file is the driver behind the Ticket.h file for the Ticket class
 */
#include "Ticket.h"
#include <iostream>
#include <iomanip>

Ticket::Ticket(const std::string& customerName, double basePrice) : customerName(customerName), basePrice(basePrice){
}
/**
 * Prints out the name and price using fixed and setprecision.
 * @param null
 * @return void
 */
void Ticket::printTicket() const{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Ticket for " << customerName
    << " -- Cost: $" << basePrice << std::endl;
}

