/**
 * @file Luggage.h
 * @author 6D92EC
 * @date 2026-02-06
 * @brief Header file for the Global Roam Luggage Tracker
 */
#ifndef LUGGAGE_H
#define LUGGAGE_H

#include <string>
/**
 * @class Luggage
 * @brief Represents the Owner, weight, and type of luggage. 
 */

class Luggage{
    private: 
        std::string owner;
        double weight;
        std::string type;

    public:
        Luggage();
        Luggage(const std::string& o, double w,const std::string& t);

        void setOwner(const std::string o);
        void setWeight(double w);
        void setType(const std::string t);

        std::string getOwner() const;
        double getWeight() const;
        std::string getType() const;
        double getOversizedFee() const;
    
};





#endif