/**
 * @file Trip.h
 * @author 6D92EC
 * @date 2026-02-02
 * @brief Header file for Global Roam Destination Loader
 */
#ifndef TRIP_H
#define TRIP_H

#include <string>
/**
 * @class Trip
 * @brief Represents the destination and the price for the Global Roam System. 
 * This class takes data, stores it into a vector in order including city, country, and the price.
 */
class Trip{
    private: 
        std::string city;
        std::string country;
        double price;

    public: 
        Trip(const std::string& c, const std::string& count, double p);

    std::string getCity() const;

    std::string getCountry() const;

    double getPrice() const;
};

#endif