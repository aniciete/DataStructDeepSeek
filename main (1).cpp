#include "static_queue.h"
#include <iostream>

using namespace std;

int main() {
    StaticQueue sq; // Create a queue object
    int choice, value;

    do { //choices
        cout << "------------------------"<<endl;
        cout << "\tQueue Menu"<<endl;
        cout << "------------------------"<<endl;
        cout << "1. Enqueue"<<endl;
        cout << "2. Dequeue"<<endl;
        cout << "3. Display"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) { //handles user's input
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                sq.enqueue(value); 
                break;
            case 2:
                sq.dequeue();
                break;
            case 3:
                sq.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again..."<<endl;
        }
    } while (choice != 4);

    return 0;
}