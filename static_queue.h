#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

#include <iostream>
using namespace std;


class StaticQueue { //Class Declaration
private:
    static const int MAX = 10; // Maximum size
    int arr[MAX]; //store queue elements.
    int front; // Index of the first element in the queue.
    int rear; //Index of the last element in the queue
    int count; //Number of current elements in the queue

public:
    StaticQueue();   // Constructor
    void enqueue(int value);  //Adds an item to the end of the queue.
    void dequeue(); //Removes an item from the front.          
    void display();   //Display queue       
    bool isEmpty();  //check if queue is empty        
    bool isFull();   //check if queue is full        
};

#endif