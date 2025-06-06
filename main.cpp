/*TB - 02
Group DeepSeek*/

#include <iostream>
#include "stack_queue.h"

using namespace std;

int main() {
    DynamicStack ds;
    int choice, value;

    do {
        cout << "\n=== Dynamic Stack Menu ===\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                ds.push(value);
                break;
            case 2:
                ds.pop();
                break;
            case 3:
                ds.display();
                break;
            case 4:
                cout << "Exiting dynamic stack demo.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
