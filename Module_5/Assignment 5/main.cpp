/**
 * @file main.cpp
 * @author 6D92EC
 * @date 2026-02-24
 * @brief Main file for the The Booking Engine
 */
#include "Ticket.h"
#include "Flight.h"
#include "Cruise.h"

#include <iostream>
#include <string>
#include <vector>

int menu(int c){
    std::cout << "Welcome to the Global Roam System\n";
    std::cout << "---------------------------------\n\n";
    std::cout << "1. Add a Flight\n";
    std::cout << "2. Add a Cruise\n";
    std::cout << "3. List Current Bookings\n";
    std::cout << "4. Delete List\n";
    std::cout << "5. Exit Booking System\n"; 
    std::cout << "Enter 1-5: ";
    std::cin >> c;

    return c;
}
int main(){
    std::vector<Ticket*> itinerary;
    
    bool exitMenu = false;

    while(exitMenu == false){
        int menuChoice = menu(menuChoice);
        std::string name;
        double price;

        if(menuChoice == 5){
            std::cout << "*** Exiting System ***\n\n";
            exitMenu = true;
            break;
        }
        else if(menuChoice == 1){
            std::string flightNum;
            std::string seat;

            std::cin.ignore();
            std::cout << "Customer Name: ";
            getline(std::cin, name);

            std::cout << "Ticket Price: ";
            std::cin >> price;

            std::cin.ignore();
            std::cout << "Flight Number: ";
            getline(std::cin, flightNum);
            
            std::cout << "Seat Number: ";
            getline(std::cin, seat);

            itinerary.push_back(new Flight(name, price, flightNum, seat));
        }
        else if(menuChoice == 2){
            std::string ship;
            std::string type;

            std::cin.ignore();
            std::cout << "Customer Name: ";
            getline(std::cin, name);

            std::cout << "Ticket Price: ";
            std::cin >> price;
            
            std::cin.ignore();
            std::cout << "Ship Name: ";
            getline(std::cin, ship);

            std::cout << "Cabin Type: ";
            getline(std::cin, type);

            itinerary.push_back(new Cruise(name, price, ship, type));
        }
        else if (menuChoice == 3){
            std::cout << "--- Flight and Cruise Bookings ---\n";
            std::cout << "----------------------------------\n\n";
            for(Ticket* tickets : itinerary){
                tickets->printTicket();
            }
        }
        else if (menuChoice == 4){
            std::cout << "*** Deleting List ***\n\n";
            for(Ticket* tickets : itinerary){
                delete tickets;
            }
            itinerary.clear();
        }
        else{
            std::cout << "*** [ERROR] Invalid Request ***\n";
        }
    }

    return 0;
}