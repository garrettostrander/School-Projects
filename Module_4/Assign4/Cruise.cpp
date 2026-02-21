/**
 * @file Cruise.cpp
 * @author 6D92EC
 * @date 2026-02-18
 * @brief Driver file for the Cruise class 
 */
#include "Cruise.h"
#include <iostream>

Cruise::Cruise(const std::string& customerName, double basePrice, const std::string& cabinType, const std::string& shipName) 
 : Ticket(customerName, basePrice), cabinType(cabinType), shipName(shipName){}
/**
 * Calls the printTicket funtion from the Ticket class to display the customer
 * name and base ticket price. Displays the ship name and cabin type. 
 * @param null
 * @return void
 */
void Cruise::printTicket() const{
    std::cout << "--- Cruise Booking ---" << std::endl;
    Ticket::printTicket();
    std::cout << "Ship: " << shipName
    << " | Cabin: " << cabinType << std::endl << std::endl;
}