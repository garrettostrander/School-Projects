/**
 * @file main.cpp
 * @author 6D92EC
 * @date 2026-02-05
 * @brief Main file for the Global Roam itinerary builder.
 */
#include "Destination.h"
#include <iostream>
#include <iomanip>
#include <string>

int main(){
    int stops = 0;

    std::cout << "Input number of desired stops: ";
    std::cin >> stops;
    
    while(stops <= 0){
        std::cout << "\nInvalid input.\n" <<
        "Please Input number of desired stops: ";
        std::cin >> stops;
    }

    Destination* itinerary = new Destination[stops];

    for(int i = 0; i < stops; i++){
        std::string city;
        int days;
        double dailyCost;

        std::cin.ignore();
        std::cout << "\n--- Stop: " << i + 1 << " ---" << std::endl;
        std::cout << "City: ";
        getline(std::cin, city);

        std::cout << "Number of days staying: ";
        std::cin >> days;

        std::cout << "Estimated cost per day: $";
        std::cin >> dailyCost;

        itinerary[i].setCity(city);
        itinerary[i].setDays(days);
        itinerary[i].setDailyCost(dailyCost);
    }

    double totalCost = 0.0;
    std::cout << "\n--- Trip Report ---\n";
    std::cout << std::fixed << std::setprecision(2);

    
    for(int i = 0; i < stops; i++){
        double stopCost = itinerary[i].getStopCost();
        totalCost += stopCost;

        std::cout << "--- " << "Destination: " << i + 1 << " ---" << std::endl;
        std::cout << "City: " << itinerary[i].getCity() << std::endl;
        std::cout << "Days staying: " << itinerary[i].getDays() << std::endl;
        std::cout << "Cost: $" << itinerary[i].getDailyCost() << std::endl;
        std::cout << "Running Total: $" << totalCost << std::endl << std::endl;

    }

    std::cout << "--- TOTAL COST ---\n" << "Total Cost: $" << totalCost << std::endl;

    delete[] itinerary;
    itinerary = nullptr;

    std::cout << "Deleting pointer...freeing memory...\n";


    return 0;
}