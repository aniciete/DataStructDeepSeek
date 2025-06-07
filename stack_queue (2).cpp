#include <iostream>
#include "stack_queue.h"
using namespace std;

Dynamicintqueue::Dynamicintqueue(){//constructor front and rear is null which means the queue is empty
    front=nullptr;
    rear=nullptr;
    numItems=0;
}
Dynamicintqueue::~Dynamicintqueue(){//destructor
    clear();
}
void Dynamicintqueue::enqueue(int num) {
    Queuenode *newNode=new Queuenode;
    newNode->value=num;
    newNode->next=nullptr;
    if (isEmpty()){
        front=rear=newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
numItems++;
}
void Dynamicintqueue::dequeue(int &num) {// Dequeue: Remove from front
    if (isEmpty()){
        cout << "The queue is empty.\n";
        return;
    }
    num = front->value;
    Queuenode* temp = front;
    front = front->next;
    delete temp;
    numItems--;
}
bool Dynamicintqueue::isEmpty() const {// isEmpty: Check if queue is empty
    return numItems == 0;
}
void Dynamicintqueue::clear() {// clear: Delete all nodes
    int dummy;
    while (!isEmpty()) {
        dequeue(dummy);
    }
}
void Dynamicintqueue::display() const {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return;
    }
    cout << "Queue contents (front to rear): ";
    Queuenode* current = front;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}