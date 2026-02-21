/**
 * @file main.cpp
 * @author 6D92EC
 * @date 2026-02-17
 * @brief The main file for the Global Roam Staff Directory. 
 */
#include <iostream>
#include "TravelAgent.h"
#include "Person.h"

int main(){

    Person per("Doug Dimmadome", "1000 Dimmsdale St");

    std::cout << "--- Testing Base Class (Person) ---" << std::endl;
    per.printInfo();

    std::cout << "\n\n";

    TravelAgent agent("Heinz Doofenshmirtz", "9297 Polly Parkway", 1, 90000.00);

    std::cout << "--- Testing Derived Class (TravelAgent) ---" << std::endl;
    agent.printInfo();
    
    return 0;
    
}