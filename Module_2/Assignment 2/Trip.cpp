/**
 * @file Trip.cpp
 * @author 6D92EC
 * @date 2026-02-02
 * @brief Implementation file for the logic of the Trip class. 
 */
#include "Trip.h"

Trip::Trip(const std::string& c, const std::string& count, double p) : city(c), country(count), price(p){
};
/**
 * Gets city name
 * @return string
 */
std::string Trip::getCity() const{
    return city;
}
/**
 * Gets country name
 * @return string
 */
std::string Trip::getCountry() const{
    return country;
}
/**
 * Gets trip price
 * @return double
 */
double Trip::getPrice() const{
    return price;
}