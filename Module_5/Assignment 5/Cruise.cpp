/**
 * @file Cruise.cpp
 * @author 6D92EC
 * @date 2026-02-24
 * @brief Driver file for the Cruise class
 */
#include "Cruise.h"

#include <iostream>
#include <iomanip>

Cruise::Cruise(const std::string& customerName, double basePrice, const std::string& shipName, const std::string& cabinType)
: Ticket(customerName, basePrice), shipName(shipName), cabinType(cabinType) {
}
/**
 * overrides the virtual function to print a ticket for the Cruise class
 * Uses set precision and fixed to correctly side the price
 * @param none
 * @return void
 */
void Cruise::printTicket(){
    std::cout << "--- Cruise Ticket ---" << std::endl;
    std::cout << customerName << std::fixed << std::setprecision(2) << " $" << basePrice;
    std::cout << " | " << shipName << " (" << cabinType << ")"
    << std::endl << std::endl << std::endl;

}