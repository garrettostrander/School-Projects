/**
 * @file main.cpp
 * @author 6D92EC
 * @date 2026-03-29
 * @brief main file for the Global Roam Grand Tour
 */
#include <iostream>
#include <string>
/**
 * @brief Represents one city in linked list
 */
struct Node {
    std::string city;
    Node* next;

    Node(std::string c, Node* n = nullptr) {
        city = c;
        next = n;
    }
};
/**
 * Displays the nodes until it reaches nullptr
 * @param Node
 * @return void
 */
void displayList(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        std::cout << temp -> city;

        if(temp -> next != nullptr) {
            std::cout << " -> ";
        }

        temp = temp -> next;
    }
}
/**
 * Connects the europeHead list with asiaHead
 * by traversing until it reaches nullptr, then setting that to 
 * the head of list 2
 * @param Node
 * @return merged list
 */
Node* mergeLists(Node* list1, Node* list2) {
    if(list1 == nullptr){
        return list1;
    }

    Node* temp = list1;

    while (temp -> next != nullptr){
        temp = temp -> next;
    }

    temp -> next = list2;

    return list1;
}
/**
 * Traverses the linked list while saving the next link
 * each link gets deleted one by one
 * @param Node
 * @return void
 */
void deleteList(Node* head){
    Node* temp = head;
    while(temp){
        Node* nextNode = temp -> next;

        std::cout << "Deleting: " << temp -> city << "... ";

        delete temp;

        temp = nextNode;
    }
    std::cout << " Done. " << std::endl;
}

int main(){

    //head for europe London → Paris → Berlin
    Node* europeHead = new Node{"London", nullptr};
    europeHead -> next = new Node{"Paris", nullptr};
    europeHead -> next -> next = new Node{"Berlin", nullptr};


    //head for asia Tokyo → Seoul → Beijing
    Node* asiaHead = new Node{"Tokyo", nullptr};
    asiaHead -> next = new Node{"Seoul", nullptr};
    asiaHead -> next -> next = new Node{"Beijing", nullptr};
    
    std::cout << "--- Global Roam Itinerary Merger ---" << std::endl << std::endl;

    std::cout << "Merging Europe and Asia routes..." << std::endl;

    Node* grandTour = mergeLists(europeHead, asiaHead);

    std::cout << "Full Itinerary: ";
    displayList(grandTour);

    std::cout << std::endl << std::endl;

    std::cout << "Cleaning up memory..." << std::endl;
    deleteList(grandTour);

    return 0;
}