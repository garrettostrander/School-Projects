/**
 * @file Person.h
 * @author 6D92EC
 * @date 2026-02-17
 * @brief This is the Header file for the Person class used in the Global Roam system. 
 */
#ifndef PERSON_H
#define PERSON_H

#include <string>
/**
 * @class Person
 * @brief This class stores/displays data (name, address) for one person.
 * This is the parent class to TravelAgent and uses protected data so it may be accessed 
 * through its child class. 
 */
class Person{
    protected:

        std::string name;
        std::string address;

    public:

        Person(const std::string& name, const std::string& address);

        std::string getName() const;
        std::string getAddress() const;

        void printInfo() const;

};

#endif





