// stack_queue.cpp
// This file contains the actual code or logic for each function of the StaticStack class

#include "stack_queue.h"

// Constructor: sets top to -1 which means the stack is empty at the start
StaticStack::StaticStack() {
    top = -1;
}

// Checks if the stack has reached its maximum size
bool StaticStack::isFull() {
    return top == 4; // 0 to 4 means 5 elements max
}

// Checks if there are no elements in the stack
bool StaticStack::isEmpty() {
    return top == -1;
}

// Adds a value to the stack if it's not full
void StaticStack::push(int value) {
    if (isFull()) {
        cout << "\n[!] Stack is full. Cannot push value." << endl;
        return;
    }
    top++;              // Move the top up
    stack[top] = value; // Insert the value at the new top position
    cout << "\n[+] Pushed: " << value << " onto the stack." << endl;
}

// Removes the top value from the stack if it's not empty
void StaticStack::pop() {
    if (isEmpty()) {
        cout << "\n[!] Stack is empty. Nothing to pop." << endl;
        return;
    }
    cout << "\n[-] Popped: " << stack[top] << " from the stack." << endl;
    top--; // Move the top down to remove the item
}

// Displays the elements in the stack from top to bottom
void StaticStack::display() {
    if (isEmpty()) {
        cout << "\n[!] Stack is empty." << endl;
        return;
    }

    cout << "\nCurrent Stack (Top to Bottom):" << endl;
    for (int i = top; i >= 0; i--) {
        cout << "   [" << stack[i] << "]" << endl; // Brackets to show each value
    }
}

