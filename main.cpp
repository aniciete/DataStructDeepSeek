// main.cpp
// This file is where the program starts and the user interacts with the menu

#include "stack_queue.h"

int main() {
    StaticStack s;  // Create a stack object
    int choice, value;

    // This loop keeps running until the user chooses to exit (choice = 4)
    do {
        // Display menu options
        cout << "=============================================" << endl;
        cout << "              STATIC STACK MENU" << endl;
        cout << "============================================="<< endl;
        cout << "       1. Push" << endl;
        cout << "       2. Pop" << endl;
        cout << "       3. Display Stack" << endl;
        cout << "       4. Exit" << endl;
        cout << endl; 
        cout << "   Choose option: "; 
        cin >> choice;
        cout << "_____________________________________________" << endl; 

        // Menu selection
        switch (choice) {
            case 1:
                cout << "\nEnter value to push: ";
                cin >> value;
                s.push(value); // Call push function
                break;
            case 2:
                s.pop();       // Call pop function
                break;
            case 3:
                s.display();   // Call display function
                break;
            case 4:
                cout << "\nExiting program..." << endl;
                break;
            default:
                cout << "\n[!] Invalid option. Try again." << endl;
        }

        cout << "\n---------------------------------------------\n" << endl;

    } while (choice != 4); // Keeps looping unless user chooses 4 (exit)

    return 0;
}

