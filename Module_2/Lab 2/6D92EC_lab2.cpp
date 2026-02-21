/**
 * @file 6D92EC_lab2.cpp
 * @author 6D92EC
 * @date 2026-02-01
 * @brief Program for Global Roam's Ground Control team to quickly log 
 * flight departures/arrivals and to/from destinations 
 */
#include <iostream>
#include <fstream>
#include <string>


int main(){
    const std::string flightLog = "flight_log.txt";
    int menuChoice = 0;
    std::cout << "******* Ground Control Flight Logger *******\n\n";//staart here
    do{
        //create menu
        std::cout << "Please select a choice (1 - 3):\n";
        std::cout << "1. Log a Departure\n";
        std::cout << "2. Log an Arrival\n";
        std::cout << "3. Quit\n";
        std::cin >> menuChoice;

        if(menuChoice < 1 || menuChoice > 3){
            std::cout << "Invalid input. Please enter 1, 2, or 3\n";
            break;
        }

        std::cin.ignore();

        if(menuChoice == 3){
            std::cout << "Have a nice day!\n";
            break;
        }
        else if(menuChoice == 1){
            std::string flightNumber, destination;

            std::cout << "Enter Flight Number: ";
            getline(std::cin, flightNumber);

            std::cout << "Enter Destination: ";
            getline(std::cin, destination);

            std::ofstream outFile(flightLog, std::ios::app);

            if(!outFile){
                std::cout << "[ERROR] " << flightLog << " could not be opened.\n";
                continue;
            }

            outFile << "DEPARTURE: " << flightNumber << " to " << destination << "\n";
            outFile.close();

            std::cout << "Departure has been successfully logged.\n";

        }
        else if(menuChoice == 2){
            std::string flightNumber, pointOfDeparture;

            std::cout << "Enter Flight Number: ";
            getline(std::cin, flightNumber);

            std::cout << "Enter Point of Departure: ";
            getline(std::cin, pointOfDeparture);

            std::ofstream outFile(flightLog, std::ios::app);

            if(!outFile){
                std::cout << "[ERROR] " << flightLog << " could not be opened.\n";
                continue;
            }
            outFile << "ARRIVAL: " << flightNumber << " from " << pointOfDeparture << "\n";
            outFile.close();

            std::cout << "Arrival has been successfully logged.\n";
        }

    }while(menuChoice != 3); 
    
    return 0;
}