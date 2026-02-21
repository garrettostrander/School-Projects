/**
 * @file Destination.h
 * @author 6D92EC
 * @date 2026-02-05
 * @brief Header file for the Global Roam itinerary builder. 
 */
#ifndef DESTINATION_H
#define DESTINATION_H
#include <string>

/**
 * @class Destination
 * @brief Represents the city, amount of days, and the daily cost for Global Roams itinerary. 
 * This class takes uses data to dynamically allocate the memory. 
 */

class Destination{
    private: 
        std::string city;
        int days;
        double dailyCost;
    public:
        Destination();

    void setCity(const std::string& c);
    void setDays(int d);
    void setDailyCost(double dayCost);

    std::string getCity() const;
    int getDays() const;
    double getDailyCost() const;

    double getStopCost() const;
};




#endif 

//city. cost. stop amount
//setters.getters
//