/**
 * @file Employee.cpp
 * @author 6D92EC
 * @date 2026-03-31
 * @brief Driver file for the Employee class
 */
#include "Employee.h"
#include <iostream>
#include <utility>
#include <algorithm>

int Employee::employeeCount = 0;

/**
 * Class constructor to set values and increments
 * the employee count.
 * @param string, int, string
 */
Employee::Employee(const std::string& employeeName, int employeeId, const std::string& portfolioData)
    : employeeName(employeeName), employeeId(employeeId), portfolio(new std::string(portfolioData)){
        ++employeeCount;
}

/**
 * Copy constructor to set values and create
 * a new object on heap.
 * @param Employee
 */
Employee::Employee(const Employee& source) 
: employeeName(source.employeeName), employeeId(source.employeeId), portfolio(nullptr){
    if(source.portfolio != nullptr){
        portfolio = new std::string(*source.portfolio);
    }
    ++employeeCount;
}

/**
 * Move constructor for setting the values.
 * @param Employee
 */
Employee::Employee(Employee&& source) noexcept 
: employeeName(std::move(source.employeeName)), employeeId(source.employeeId), portfolio(source.portfolio){
    source.portfolio = nullptr;
    source.employeeId = 0;
}

/**
 * Employee destructor to clean up dynamic memory.
 * @param NA
 */
Employee::~Employee(){
    delete portfolio;
    portfolio = nullptr;
    --employeeCount;
}

/**
 * Copy assignment using copy-and-swap.
 * @param Employee
 * @return Employee
 */
Employee& Employee::operator=(const Employee& source){
    if(this != &source){
        Employee temp(source);
        swap(*this, temp);
    }
    return *this;
}

/**
 * Move assignment that steals the portfolio pointer. 
 * @param Employee
 * @return Employee
 */
Employee& Employee::operator=(Employee&& source) noexcept {
    if(this != &source){
        delete portfolio;

        employeeName = std::move(source.employeeName);
        employeeId = source.employeeId;
        portfolio = source.portfolio;

        source.portfolio = nullptr;
        source.employeeId = 0;
    }
    return *this;
}

/**
 * gets the number of employees when called
 * @param NA
 * @return int
 */
int Employee::getCount(){
    return employeeCount;
}


/**
 * Friend function for outputing the 
 * employee name, id, and portfolio.
 * @param ostream, Employee
 * @return os
 */
std::ostream& operator<<(std::ostream& os, const Employee& em){
    os << "Hiring: " << em.employeeName << " (ID: " << em.employeeId 
    << ") | Portfolio: ["; 
    if(em.portfolio == nullptr){
        os << "nullptr";
    }
    else{
        os << *em.portfolio;
    }
    os << "]";
    return os;
}

/**
 * Friend program to check if right and left are 
 * equal to each other. Used to compare IDs. 
 * @param Employee, Employee
 * @return bool
 */
bool operator==(const Employee& l, const Employee& r){
    return l.employeeId == r.employeeId;
}

/**
 * swaps the object with another Employee object. 
 * @param Employee, Employee
 * @return void
 */
void swap(Employee& emOne, Employee& emTwo) noexcept {
    std::swap(emOne.employeeName, emTwo.employeeName);
    std::swap(emOne.employeeId, emTwo.employeeId);
    std::swap(emOne.portfolio, emTwo.portfolio);
}