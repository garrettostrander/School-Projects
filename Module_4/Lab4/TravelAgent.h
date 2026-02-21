/**
 * @file TravelAgent.h
 * @author 6D92EC
 * @date 2026-02-17
 * @brief Header file for the TravelAgent class for the Global Roam System.
 */
#ifndef TRAVELAGENT_H
#define TRAVELAGENT_H

#include "Person.h"
#include <string>
/**
 * @class TravelAgent
 * @brief Represents a single employees data (emplyeeID, salesTotal). 
 * This is a child class to the class Person. It uses Persons public data to set the constructor variables,
 * and print the information. 
 */
class TravelAgent : public Person{
    private: 

        int employeeID;
        double salesTotal;

    public:

        TravelAgent(const std::string& name, const std::string& address, int employeeID, double salesTotal);

        int getEmployeeID() const;
        double getSalesTotal() const;

        void printInfo() const;
        
};

#endif

