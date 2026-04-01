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


std::string Ticket::getCustomerName() const {
    return customerName;
}

double Ticket::getBasePrice() const {
    return basePrice;
}

void Ticket::setCustomerName(std::string& customerName) {
    this->customerName = customerName; 
}
void Ticket::setBasePrice(double basePrice) {
    this->basePrice = basePrice;
}
