/**
 * @file Itinerary.cpp
 * @author 6D92EC
 * @date 2026-03-29
 * @brief driver file for the Itinerary class
 */
#include "Itinerary.h"
#include <iostream>
#include <string>

/**
 * @brief constructor for Node with city, next, and prev. 
 * @param string, Node
 */
Itinerary::Node::Node(const std::string& cName, Node* nextPtr, Node* prevPtr)
    : city(cName), next(nextPtr), prev(prevPtr){
    }

/**
 * @brief Empty constructor to create
 * an empty Itinerary object.
 */
Itinerary::Itinerary() : head(nullptr), tail(nullptr) {
}

/**
 * @brief Destructer for the Itinerary. 
 */
Itinerary::~Itinerary() {
    Node* current = head;

    while (current){
        Node* nextNode = current -> next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
    tail = nullptr;

    std::cout << "\nMemory secured (Destructor called)." << std::endl;
}

/**
 * Append function to add a city to the 
 * end of the doubly linked list.
 * @param string
 * @return void
 */
void Itinerary::append(const std::string& cName){
    Node* newNode = new Node(cName);

    if(head == nullptr){
        head = newNode;
        tail = newNode;
    } 
    else{
        tail -> next = newNode;
        newNode -> prev = tail;
        tail = newNode;
    }
}

/**
 * Function to print the list head to tail.
 * @param NA
 * @return void
 */
void Itinerary::printForward() const{
    std::cout << "Forward: ";
    Node* currentNode = head;

    while(currentNode){
        std::cout << "[" << currentNode -> city << "] -> ";
        currentNode = currentNode -> next;
    }
    std::cout << "[END]" << std::endl;
}

/**
 * Function to print the list tail to head.
 * @param NA
 * @return void
 */
void Itinerary::printReverse() const{
    std::cout << "Reverse: ";
    Node* currentNode = tail;

    while(currentNode){
        std::cout << "[" << currentNode -> city << "] -> ";
        currentNode = currentNode -> prev;
    }
    std::cout << "[END]" << std::endl;
}

/**
 * @brief constructor for Iterator
 * @param Node, Itinerary pointers
 */
Itinerary::Iterator::Iterator(Node* nodePtr, const Itinerary* itineraryPtr)
: currentNode(nodePtr), parentPtr(itineraryPtr){
}

/**
 * @brief Access for iterator to access city name
 * @return string
 */
const std::string& Itinerary::Iterator::operator*() const{
    return currentNode -> city;
}

/**
 * @brief Moves the iterator forward.
 * @return Updated iterator
 */
Itinerary::Iterator&  Itinerary::Iterator::operator++(){
    if(currentNode){
        currentNode = currentNode -> next;
    }

    return *this;
}

/**
 * @brief Moves the iterator backwards.
 * @return Upadted iterator
 */
Itinerary::Iterator& Itinerary::Iterator::operator--(){
    if(currentNode == nullptr && parentPtr != nullptr){
        currentNode = parentPtr -> tail;
    }
    else if(currentNode){
        currentNode = currentNode -> prev;
    }
    return *this;
}

/**
 * @brief Compares two iterators, 
 * returns true they are different.
 * @param other
 * @return bool
 */
bool Itinerary::Iterator::operator!=(const Iterator& source) const {
    return currentNode != source.currentNode;
}

/**
 * @brief Compares two iterators,
 * and returns true if they are equal.
 * @param other
 * @return bool
 */
bool Itinerary::Iterator::operator==(const Iterator& source) const {
    return currentNode == source.currentNode;
}

/**
 * Returns the iterator pointing to the first node
 * @param NA
 * @return Iterator
 */
Itinerary::Iterator Itinerary::begin() const{
    return Iterator(head, this);
}

/**
 * Returns the iterator that represents one node past 
 * the end 
 * @param NA
 * @return Interator
 */
Itinerary::Iterator Itinerary::end() const{
    return Iterator(nullptr, this);
}