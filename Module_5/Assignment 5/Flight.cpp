/**
 * @file Flight.cpp
 * @author 6D92EC
 * @date 2026-02-24
 * @brief Driver file for the Flight class
 */
#include "Flight.h"

#include <iostream>
#include <iomanip>

Flight::Flight(const std::string& customerName, double basePrice,const std::string& flightNumber,const std::string& seatNumber) 
: Ticket(customerName, basePrice), flightNumber(flightNumber), seatNumber(seatNumber){
}
/**
 * overrides the virtual function to print a ticket for the Flight class
 * Uses set precision and fixed to correctly side the price
 * @param none
 * @return void
 */
void Flight::printTicket(){
    std::cout << "--- Flight Booking ---\n";
    std::cout << customerName << std::fixed << std::setprecision(2) << " $" << basePrice;
    std::cout << " | Flight: " << 
    flightNumber << " | Seat: " <<
    seatNumber << std::endl << std::endl;
}