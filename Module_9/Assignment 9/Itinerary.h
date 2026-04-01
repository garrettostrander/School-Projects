/**
 * @file Itinerary.h
 * @author 6D92EC
 * @date 2026-03-29
 * @brief Header file for the Itinerary class
 */
#ifndef ITINERARY_H
#define ITINERARY_H
#include <iostream>
#include <string>

/**
 * @class Itinerary
 * @brief This class manages a chain of nodes
 * creating a doubly linked list.
 */
class Itinerary{
    private:
    /**
     * @brief Representation of one city in 
     * a doubly linked list
     */
    struct Node{
        std::string city;
        Node* next;
        Node* prev;

        Node(const std::string& cName, Node* nextPtr = nullptr, Node* prevPtr = nullptr);
    };

    Node* head;
    Node* tail;

    public:
        /**
         * @class Iterator
         * @brief Nested Iterator class within the Itinerary class
         * for traversing a custom linked list
         */
        class Iterator{
            private:
                Node* currentNode;
                const Itinerary* parentPtr;
            
            public:

                Iterator(Node* nodePtr = nullptr, const Itinerary* itineraryPtr = nullptr);

                const std::string& operator*() const;

                Iterator& operator++();
                Iterator& operator--();

                bool operator!=(const Iterator& source) const;
                bool operator==(const Iterator& source) const;
        };

        Itinerary();
        ~Itinerary();
        /**
         * Prevents shallow copies from taking place
         */
        Itinerary(const Itinerary& source) = delete;
        /**
         * Prevents shallow copies from taking place
         */
        Itinerary& operator=(const Itinerary& source) = delete;

        void append(const std::string& cName);
        void printForward() const;
        void printReverse() const;

        Iterator begin() const;
        Iterator end() const;
};

#endif