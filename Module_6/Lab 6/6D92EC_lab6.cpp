/**
 * @file main.cpp
 * @author 6D92EC
 * @date 2026-02-24
 * @brief Main file for the the Generic Swapper
 * 
 * Reflection: Pass-by-reference is mandatory for this because the goal is to permanently 
 * change the original variables inside main(). When variables are passed by reference, swapArgs works 
 * specifically with those variables rather than a copy of them. This means the original values are actually changed.
 * If they werent passed by refernce, then the original variable would stay the same since it would make
 * a copy of those variables. That means x and y would become those variables but num1 and num2 would stay as they were.
 * 
 */
#include <iostream>
#include <string>

template <typename T>
void swapArgs(T &x, T &y){
   T holder = x;
   x = y;
   y = holder; 
}

int main(){
    int num1 = 10;
    int num2 = 20;

    std::cout << "--- Global Roam Utility Test ---\n"; 

    std::cout << "\nTesting Integers...\n"; 
    std::cout << "Before: " << num1 << ", " << num2 << std::endl;
    swapArgs(num1, num2);
    std::cout << "After: "  << num1 << ", " << num2 << std::endl;

    double doub1 = 1.5;
    double doub2 = 4.5;

    std::cout << "\nTesting Doubles...\n";
    std::cout << "Before: " << doub1 << ", " << doub2 << std::endl;
    swapArgs(doub1, doub2);
    std::cout << "After: "  << doub1 << ", " << doub2 << std::endl;

    std::string str1 = "World";
    std::string str2 = "Hello";

    std::cout << "\nTesting Strings...\n";
    std::cout << "Before: " << str1 << ", " << str2 << std::endl;
    swapArgs(str1, str2);
    std::cout << "After: "  << str1 << ", " << str2 << std::endl;
    return 0;
}   