/**
 * @file Person.cpp
 * @author 6D92EC
 * @date 2026-02-17
 * @brief The Driver for the Person class's header file. 
 */
#include "Person.h"
#include <iostream>

Person::Person(const std::string& name, const std::string& address) : name(name), address(address){
}
/**
 * Returns the name of the person
 * @param null
 * @return string
 */
std::string Person::getName() const{
    return name;
}
/**
 * Returns the address of the person
 * @param null
 * @return string
 */
std::string Person::getAddress() const{
    return address;
}
/**
 * Displays the data of the persons name and address. 
 * @param null
 * @return void
 */
void Person::printInfo() const{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Address: " << address << std::endl;
}