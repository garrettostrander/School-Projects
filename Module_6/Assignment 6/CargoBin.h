/**
 * @file CargoBin.h
 * @author 6D92EC
 * @date 2026-03-01
 * @brief CargoBin header to try and catch errors
 */
#ifndef CARGOBIN_H
#define CARGOBIN_H

#include <iostream>

template <class T>
/**
 * @class CargoBin
 * @brief This class is created using a template. The template allowes it to dynamically store the 
 * vectors per data type. 
 */
class CargoBin{
  private:
    T* binPtr;
    int capacity;
    int count = 0;
    
    public:
        CargoBin(int cap) : capacity(cap) {
            binPtr = new T[capacity]; 
        };

        ~CargoBin(){
            delete [] binPtr;
        };
        /**
         * Gets the capacity and returns it
         * @param NA
         * @return int
         */
        int getCapacity() const{
            return capacity;
        }
        /**
         * Gets the count so the program can track
         * @param NA
         * @return int
         */
        int getCount() const{
            return count;
        }
        /**
         * This method checks to see if the bin is full. 
         * @param T
         * @return void
         */
        void push(T item) {
            if(count >= capacity){
                throw std::out_of_range("Error: Bin is full");
            }
            else{
                binPtr[count] = item;
                count++;
            }

        }
        /**
         * This takes away an item from the cargo bin
         * @param NA
         * @return void
         */
        void pop(){
            if(count == 0){
                throw std::out_of_range("Error: Bin is empty");
            }
            else{
                count--;
            }
        }
};



#endif