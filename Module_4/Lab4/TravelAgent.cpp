/**
 * @file TravelAgent.cpp
 * @author 6D92EC
 * @date 2026-02-17
 * @brief The driver file for the TravelAgent class and Header file.
 */
#include "TravelAgent.h"
#include <iostream>
#include <iomanip>

TravelAgent::TravelAgent(const std::string& name, const std::string& address, int employeeID, double salesTotal) : Person(name, address), employeeID(employeeID), salesTotal(salesTotal){
}
/**
 * Returns the employee I.D. from the TravelAgent class
 * @param null
 * @return int
 */
int TravelAgent::getEmployeeID() const{
    return employeeID;
}
/**
 * Returns the employees sales total. 
 * @param null
 * @return double
 */
double TravelAgent::getSalesTotal() const{
    return salesTotal;
}
/**
 * Calls printInfo from the Person class, while adding the employee I.D. and the current
 * sales that use set precision and fixed. 
 * @param null
 * @return void
 */
void TravelAgent::printInfo() const{
    Person::printInfo();
    std::cout << "Employee ID: " << employeeID << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Current Sales: $" << salesTotal << std::endl;
}