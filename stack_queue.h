// This header file declares the StaticStack class
// It contains the function prototypes and the member variables needed.

#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

#include <iostream>
using namespace std;

// A class for creating a static stack using arrays
class StaticStack {
private:
    int top;         // This keeps track of the topmost element in the stack
    int stack[5];    // Array with fixed size of 5 to store elements

public:
    StaticStack();             // Constructor to initialize stack
    bool isFull();             // Checks if the stack is already full
    bool isEmpty();            // Checks if the stack is empty
    void push(int value);      // Adds a new item to the top of the stack
    void pop();                // Removes the top item from the stack
    void display();            // Shows all elements from top to bottom
};

#endif

