#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Choose a programming language:\n";
    cout << "1. C++\n";
    cout << "2. Python\n";
    cout << "3. Java\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected C++." << endl;
            break;
        case 2:
            cout << "You selected Python." << endl;
            break;
        case 3:
            cout << "You selected Java." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
    