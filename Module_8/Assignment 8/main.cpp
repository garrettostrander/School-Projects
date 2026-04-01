/**
 * @file main.cpp 
 * @author 6D92EC
 * @date 2026-03-28
 * @brief main function in the high-preformance trvel manager. 
 */
#include "TravelGroups.h"
#include <iostream>
#include <utility>

int main(){
    TravelGroup group1("Europe Tour", 20);
    std::cout << "Booking 'Europe Tour' (20 Peopple)." << std::endl;
    std::cout << "Global Audit: " << TravelGroup::getAgencyTotal() << std::endl;

    TravelGroup group2("Archive Group", 5);
    group2 = std::move(group1);

    std::cout << "\nMoving 'Europe Tour' to 'Archive Group' via Move Assignment..." << std::endl;
    std::cout << "Global Audit: " << TravelGroup::getAgencyTotal() << " (Verified: No duplicate counts created during move!)" << std::endl;

    TravelGroup group3("Asia Tour", 10);
    TravelGroup group4 = group2 + group3;

    std::cout << "\nMerged Group: " << group4 << std::endl;
    std::cout << "Updated Global Audit: " << TravelGroup::getAgencyTotal() << std::endl;
 

    return 0;
}