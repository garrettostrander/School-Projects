/**
 * @file TravelGroups.cpp
 * @author 6D92EC
 * @date 2026-03-28
 * @brief cpp file for the TravelGroup Header file. 
 */
#include "TravelGroups.h"
#include <iostream>
#include <string>
#include <utility>

int TravelGroup::totalSystemTravelers = 0;

/**
 * Travel Group constructor that sets groupNam and travelers, 
 * and increases totalSystemTravelers
 * @param string used for groupName and int used for travelers
 */
TravelGroup::TravelGroup(std::string groupName, int travelers) : groupName(groupName), travelers(travelers) {
    totalSystemTravelers += travelers;
}

/**
 * The copy constructor for TravelGroup
 * @param TravelGroup object
 */
TravelGroup::TravelGroup (const TravelGroup& source) : groupName(source.groupName), travelers(source.travelers){
    totalSystemTravelers += travelers;
}

/**
 * The move constructor for TravelGroup
 * @param Travelgroup right object
 */
TravelGroup::TravelGroup(TravelGroup&& source) noexcept : groupName(std::move(source.groupName)), travelers(source.travelers) {
    source.travelers = 0;
}
/**
 * @brief Copy assignment to set the values to the instance
 * @param TravelGroup object
 */
TravelGroup& TravelGroup::operator=(const TravelGroup& source) {
    if(this != &source){
        totalSystemTravelers -= travelers;
        
        groupName = source.groupName;
        travelers = source.travelers;

        totalSystemTravelers += travelers;
    }
    return *this;
}
/**
 * @brief Move assignment to 'steal' the values
 * @param TravelGroup right object
 */
TravelGroup& TravelGroup::operator=(TravelGroup&& source) noexcept {
    if(this != &source){
        totalSystemTravelers -= travelers;

        groupName = std::move(source.groupName);
        travelers = source.travelers;

        source.travelers = 0;
    }
    return *this;
}
/**
 * Destructor for TravelGroup
 * @param NA
 * @return NA
 */
TravelGroup::~TravelGroup(){
    totalSystemTravelers -= travelers;
}
/**
 * returns the total system tevallers
 * @param NA
 * @return totalSystemTravelers
 */
int TravelGroup::getAgencyTotal(){
    return totalSystemTravelers;
}
/**
 * Adds together the values from different sources
 * @param source
 * @return Object
 */
TravelGroup TravelGroup::operator+(const TravelGroup& source) const{
    return TravelGroup(groupName + " & " + source.groupName, travelers + source.travelers);
}
/**
 * Friend function to print list
 * @param ostream, object
 * @return ostream 
 */
std::ostream& operator<<(std::ostream& os, const TravelGroup& grp){
    os << "Group: " << grp.groupName << ", Travelers: " << grp.travelers;
    return os;
}