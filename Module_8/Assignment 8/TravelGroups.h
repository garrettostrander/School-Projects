/**
 * @file TravelGroups.h
 * @author 6D92EC
 * @date 2026-03-28
 * @brief Header file for the Travel Groups class 
 */
#ifndef TRAVELGROUPS_H
#define TRAVELGROUPS_H
#include <iostream>
#include <string>
/**
 * @class TravelGroup
 * @brief contains move and copy constructors, 
 * while using the move and copy assignments
 */
class TravelGroup{
    private: 
        std::string groupName;
        int travelers;
        static int totalSystemTravelers;

    public: 
    TravelGroup(std::string groupName, int travelers);
    //copy constructor
    TravelGroup(const TravelGroup& source);
    //move constructor
    TravelGroup(TravelGroup&& source) noexcept;
    

    TravelGroup& operator=(const TravelGroup& source);
    TravelGroup& operator=(TravelGroup&& source) noexcept;

    ~TravelGroup();

    static int getAgencyTotal();
 
    TravelGroup operator+(const TravelGroup& source) const;

    friend std::ostream& operator<<(std::ostream& os, const TravelGroup& s);
};



#endif