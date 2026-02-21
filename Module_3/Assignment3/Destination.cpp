/**
 * @file Destination.cpp
 * @author 6D92EC
 * @date 2026-02-05
 * @brief Implementation file for the Destination class. 
 */
#include "Destination.h"

Destination::Destination() : city("N/A"), days(0), dailyCost(0){
}
/**
 * sets the city name
 * @return void
 */
void Destination::setCity(const std::string& c){
    city = c;
}
/**
 * sets the days while checking for negative numbers
 * @return void
 */
void Destination::setDays(int d){
    if(d < 0){
        days = 0;
    }
    else{
        days = d;
    }
}
/**
 * sets the daily cost while checking for negative numbers
 * @return void
 */
void Destination::setDailyCost(double dayCost){
    if(dayCost < 0){
        dailyCost = 0.0;
    }
    else{
        dailyCost = dayCost;
    }
}
/**
 * gets the city name
 * @return string
 */
std::string Destination::getCity() const{
    return city;
}
/**
 * gets the number of days
 * @return int
 */
int Destination::getDays() const{
    return days;
}
/**
 * gets the daily cost
 * @return double
 */
double Destination::getDailyCost() const{
    return dailyCost;
}
/**
 * gets the stop cost
 * @return double
 */
double Destination::getStopCost() const{
    return days * dailyCost;
}
