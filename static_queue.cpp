#include "static_queue.h"

StaticQueue::StaticQueue() { //constructor
    front = 0;
    rear = -1;
    count = 0;
}

bool StaticQueue::isEmpty() { //check if queue is empty
    return count == 0;
}

bool StaticQueue::isFull() { //check if queue is full  
    return count == MAX;
}

void StaticQueue::enqueue(int value) { //Adds an item to the end of the queue
    if (isFull()) {
        cout << "Queue Overflow! Cannot enqueue " << value << ".\n";
        return;
    }
    rear = (rear + 1) % MAX; // Circular behavior to avoid unnecessary shifting or reallocation
    arr[rear] = value; 
    count++;
    cout << value << " enqueued into the queue.\n";
}

void StaticQueue::dequeue() { //Removes an item from the front.
    if (isEmpty()) {
        cout << "Queue Underflow! Cannot dequeue.\n";
        return;
    }
    cout << arr[front] << " dequeued from the queue.\n";
    front = (front + 1) % MAX; 
    count--;
}

void StaticQueue::display() { //Display queue      
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return;
    }

    cout << "Queue elements: "; 
    for (int i = 0; i < count; i++) {
        int index = (front + i) % MAX;
        cout << arr[index] << " ";
    }
    cout << endl;
}