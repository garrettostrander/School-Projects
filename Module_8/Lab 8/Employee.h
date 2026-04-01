/**
 * @file Employee.h
 * @author 6D92EC
 * @date 2026-03-31
 * @brief Header file for the Employee class
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
/**
 * @class Employee
 * @brief This class contains static members, shows dynamic memory
 * management, and copy and move functions.
 */
class Employee{
    private:
        std::string employeeName;
        int employeeId;
        std::string* portfolio;

        static int employeeCount;
        
    public: 

        Employee(const std::string& employeeName, int employeeId, const std::string& portfolioData);
        Employee(const Employee& source);
        Employee(Employee&& source) noexcept;

        ~Employee();

        Employee& operator=(const Employee& source);
        Employee& operator=(Employee&& source) noexcept;

        static int getCount();

        friend std::ostream& operator<<(std::ostream& os, const Employee& em);
        friend bool operator==(const Employee& l, const Employee& r);

        friend void swap(Employee& a, Employee& b) noexcept;
};  

#endif