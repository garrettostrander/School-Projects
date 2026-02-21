/**
 * @file main.cpp
 * @author 6D92EC
 * @date 2026-02-18
 * @brief Main file for the Ticket System
 */
#include "Ticket.h"
#include "Flight.h"
#include "Cruise.h"

#include <iostream>

int main(){
    
    Flight f("Oliver Queen", 400.00, "UA99", "14B");
    f.printTicket();

    Cruise c("Diana Prince", 1250.00, "Balcony", "Ocean Star");
    c.printTicket();

    Flight f1("Leroy Jenkins", 750.50, "BA202", "02A");
    f1.printTicket();

    Cruise c1("Arthur Curry", 2100.00, "Royal Suite", "Atlantis Quees");
    c1.printTicket();
    
    return 0;
}
