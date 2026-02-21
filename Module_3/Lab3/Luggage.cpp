/**
 * @file Luggage.cpp
 * @author 6D92EC
 * @date 2026-02-06
 * @brief Implementation file for the Luggage class. 
 */
#include "Luggage.h"

Luggage::Luggage() : owner("Unknown"), weight(0.0), type("Checked"){
}

Luggage::Luggage(const std::string& o, double w, const std::string& t) {
    setOwner(o);
    setWeight(w);
    setType(t);
}
/**
 * sets the owner name
 * @return void
 */
void Luggage::setOwner(const std::string o){
    owner = o;
}
/**
 * sets the weight 
 * @return void
 */
void Luggage::setWeight(double w){
    if(w < 0.0){
        weight = 0.0;
    }
    else{
        weight = w;
    }
}
/**
 * sets the type of luggage
 * @return void
 */
void Luggage::setType(const std::string t){
    type = t;
}
/**
 * gets the owners name
 * @return string
 */
std::string Luggage::getOwner() const{
    return owner;
}
/**
 * gets the weight 
 * @return double
 */
double Luggage::getWeight() const{
    return weight;
}
/**
 * gets the type of luggage
 * @return string
 */
std::string Luggage::getType() const{
    return type;
}
/**
 * gets the gets/checks the oversized fee 
 * @return double
 */
double Luggage::getOversizedFee() const{
    if(weight > 50.0){
        return 50.0;
    }
    else{
        return 0.0;
    }
}

