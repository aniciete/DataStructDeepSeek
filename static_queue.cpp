/*TB - 02
Group DeepSeek*/

#include <iostream>
#include "stack_queue.h"

using namespace std;

// Constructor
DynamicStack::DynamicStack() {
    top = nullptr;
}

// Destructor to free memory
DynamicStack::~DynamicStack() {
    while (!isEmpty()) {
        pop();
    }
}

// Push an element onto the stack
void DynamicStack::push(int value) {
    StackNode* newNode = new StackNode;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << value << " pushed onto the dynamic stack.\n";
}

// Pop an element from the stack
void DynamicStack::pop() {
    if (isEmpty()) {
        cout << "Dynamic stack underflow! Nothing to pop.\n";
        return;
    }
    StackNode* temp = top;
    cout << temp->data << " popped from the dynamic stack.\n";
    top = top->next;
    delete temp;
}

// Display stack contents
void DynamicStack::display() {
    if (isEmpty()) {
        cout << "Dynamic stack is empty.\n";
        return;
    }

    cout << "Dynamic stack contents (top to bottom): ";
    StackNode* current = top;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Check if stack is empty
bool DynamicStack::isEmpty() {
    return top == nullptr;
}
