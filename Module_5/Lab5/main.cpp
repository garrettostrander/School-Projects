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
#include <vector>

int main(){
    
    //Ticket myTicket("guest", 50.00); It won't run because ticket is abstract due to
    //changing it to a virtual function

    std::vector<Ticket*> tickets;
    int count = 1;
    tickets.push_back(new Flight("Ben Ten", 350.00, "AA123", "9C"));
    tickets.push_back(new Cruise("Doug Dimmadome", 1200.00, "Disney Wish", "Verandah"));

    for(Ticket* ticket : tickets){
        std::cout << "Ticket " << count << ": " << std::endl;
        ticket->printTicket();
        std::cout << std::endl << std::endl;
        count++;
    }
    
    for(Ticket* ticket : tickets){
        delete ticket;
        std::cout << "Deleting tickets...\n";
    }
    tickets.clear();
    return 0;
}
