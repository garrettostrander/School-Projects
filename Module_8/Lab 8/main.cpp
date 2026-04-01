/**
 * @file main.cpp
 * @author 6D92EC
 * @date 2026-03-31
 * @brief Main file for the Global Roam Corporate Directory
 * 
 * REFLECTION:
 * The move assignment is faster than the copy assignment for large attributes 
 * because it transfers ownership of the existing heap memory instead of allocating
 * brand new memory by copying the contents.
 */
#include "Employee.h"
#include <iostream>

int main(){
    std::cout << "System Initialization... Global Count: " << Employee::getCount() << "\n";
    
    Employee alice("Alice", 101, "Full_Time_Ben");
    Employee bob("Bob", 102, "Contractor_Gen");
    
    std::cout << alice << std::endl;
    std::cout << bob << std:: endl;

    std::cout << "\n--- Transferring Records (Move Assignment) ---\n";
    
    Employee archive(std::move(alice));

    std::cout << "Alice record moved to Archive. Alice portfolio is now nullptr.\n";
    std::cout << "New Global Count: " << Employee::getCount() << "\n\n";

    return 0;
}