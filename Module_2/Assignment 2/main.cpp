/**
 * @file main.cpp
 * @author 6D92EC
 * @date 2026-02-02
 * @brief Main file used in the Global Roam Destination Loader 
 */

#include "Trip.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

/**
 * Opens the file, extracts the data, and reformats it.
 * Outputs the data from the Trip class
 * @return 0
 */

int main(){

    const std::string destinationFile = "destinations.txt";
    std::ifstream inFile(destinationFile);
    std::vector<Trip> tripData;
    std::string line;
    if(!inFile){
        std::cout << "[ERROR] " << destinationFile << " could not be opened.\n";
        std::cout << "POSSIBLE SOLUTION: Check if file is missing.\n";
        return 1;
    }

    std::cout << "--- Global Roam System: Loading Data ---\n";
    
    

    while(getline(inFile,line)){
        int comma1 = line.find(',');
        std::string city = line.substr(0,comma1);

        line = line.substr(comma1 +1);

        int comma2 = line.find(',');
        std::string country = line.substr(0, comma2);

        std::string priceStr = line.substr(comma2 + 1);

        double price = stod(priceStr);

        tripData.push_back(Trip(city, country, price));

    }
    
    inFile.close();

    std::cout << "Successfully loaded 10 destinations.\n\n";
    std::cout << "--- Available Travel Packages ---\n";

    std::cout << std::fixed << std::setprecision(2);

    for(int i = 0; i < tripData.size(); i++){
        std::cout << i + 1 << ". " << tripData[i].getCity() << ", " << tripData[i].getCountry() << " ($" << tripData[i].getPrice()
        << ")\n";
    }


    return 0;
}
