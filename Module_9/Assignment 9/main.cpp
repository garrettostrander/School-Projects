/**
 * @file main.cpp
 * @author 6D92EC
 * @date 2026-03-29
 * @brief Main .cpp for the Global Roam Itinerary. 
 */
#include "Itinerary.h"
#include <iostream>
#include <string>
#include <list>

int main(){
    Itinerary myList;
    std::string name; 

    myList.append("London");
    myList.append("Paris");
    myList.append("Tokyo");

    std::cout << "--- Standard Requirement Output ---" << std::endl;
    myList.printForward();
    myList.printReverse();

    std::cout << std::endl;

    std::list<std::string> stlList;

    stlList.push_back("London");
    stlList.push_back("Paris");
    stlList.push_back("Tokyo");

    std::cout << "--- STL Comparison Output ---" << std::endl;
    std::cout << "std::list Reverse Iterator: ";

    for(auto it = stlList.rbegin(); it != stlList.rend(); ++it){
        std::cout << *it;

        auto nextIt = it;
        ++nextIt;

        if (nextIt != stlList.rend()) {
            std::cout << " ";
        }
    }

    std::cout << "\n\n--- [BONUS] Senior Engineer Iterator Trace ---" << std::endl;
    std::cout << "Traversing custom list via overloaded Iterator ++:" << std::endl;

    for(auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << ">> Visiting: " << *it << std::endl;
    }


    return 0;
}