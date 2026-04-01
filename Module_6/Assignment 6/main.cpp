/**
 * @file main.cpp
 * @author 6D92EC
 * @date 2026-03-01
 * @brief Main file for the Global Roam pusher
 */
#include <iostream>
#include <string>
#include "CargoBin.h"

/**
 * @class Ticket
 * @brief This class creates an object to test the CargoBin class. 
 * The private variables is the customer. 
 */
class Ticket{
    private: 
        std::string customer;
    public:
        Ticket() : customer("Unknown"){}
        Ticket(const std::string& customer) : customer(customer){}
};
int main(){

    CargoBin<int> bin(3);
    try{
    bin.push(10);
    bin.push(20);
    bin.push(30);
    bin.push(40);
    }
    catch (const std::out_of_range& e){
        std::cerr << e.what() << std::endl;
    }
    
    CargoBin<std::string> strBin(1);
    try{
        strBin.push("Mail");
        strBin.pop();
        strBin.pop();
    }
    catch(const std::out_of_range& e){
        std::cerr << e.what() << std::endl;
    }
    
    CargoBin<Ticket> cBin(1);
    try
    {
            Ticket objBin("Garrett");
            cBin.push(objBin);

            std::cout << "Pushed one Ticket Object.\n";

            cBin.pop();
            std::cout << "Popped object\n";
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    


    return 0;
}