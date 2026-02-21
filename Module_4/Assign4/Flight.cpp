/**
 * @file Flight.cpp
 * @author 6D92EC
 * @date 2026-02-18
 * @brief Flight class driver for Flight.h
 */
#include "Flight.h"
#include <iostream>

Flight::Flight(const std::string& customerName, double basePrice,const std::string& flightNumber,const std::string& seatNumber)
 : Ticket(customerName, basePrice), flightNumber(flightNumber), seatNumber(seatNumber){}
/**
 * Calls the printTicket function from the Ticket class to display 
 * the customers name and the base price. Then adds flight number and seat number
 * @param null
 * @return void
 */
 void Flight::printTicket() const{
    std::cout << "--- Flight Booking ---" << std::endl;
    Ticket::printTicket();
    std::cout << "Flight: " << flightNumber 
    << " | Seat: " << seatNumber << std::endl << std::endl;
 }