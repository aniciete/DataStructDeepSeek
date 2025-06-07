#include <iostream>
#include "stack_queue.h"
using namespace std;

int main() {
    Dynamicintqueue queue;
    int choice, value;

    while (true) {
        cout << "\n=== Dynamic Queue Menu ===\n";
        cout << "1. Enqueue (Add item)\n";
        cout << "2. Dequeue (Remove item)\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                queue.enqueue(value);
                break;

            case 2:
                queue.dequeue(value);
                break;

            case 3:
                queue.display();
                break;

            case 4:
                cout << "Exiting program.\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}


