/**
 * @file main.cpp
 * @author 6D92EC
 * @date 2026-02-06
 * @brief Main file for the Global Roam Luggage Tracker 
 */
#include "Luggage.h"
#include <iostream>
#include <string>
#include <iomanip>

int main(){
    Luggage bag1;
    std::string owner;
    double weight;
    std::string type;

    std::cout << "--- Stack Object (bag1) ---\n";
    std::cout << "Enter Owner Name: ";
    getline(std::cin, owner);

    std::cout << "Enter Weight (lbs): ";
    std::cin >> weight;
    std::cin.ignore();

    std::cout << "Enter Type: ";
    getline(std::cin, type);

    bag1.setOwner(owner);
    bag1.setWeight(weight);
    bag1.setType(type);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Owner: " << bag1.getOwner() << " | Oversized Fee: $" << bag1.getOversizedFee() << std::endl;

    std::cout << "\n--- Heap Object (bag2) ---\n";
    std::cout << "*Creating Bag on Heap...*\n";
    
    Luggage* bag2 = new Luggage("Alice Smith", 65.5, "Checked");

    std::cout << "Name: "<< bag2->getOwner() <<
    std::fixed << std::setprecision(1) << " | Weight: " << bag2->getWeight() <<
    std::fixed << std::setprecision(2) << "lbs | Oversized Fee: $" << bag2->getOversizedFee() << std::endl;

    std::cout << "*Deleting bag2...*\n";
    delete bag2;
    bag2 = nullptr;


    
    return 0;
}