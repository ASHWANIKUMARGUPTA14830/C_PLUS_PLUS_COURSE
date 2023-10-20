#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Menu Options:" << endl;
    cout << "1. Option A" << endl;
    cout << "2. Option B" << endl;
    cout << "3. Option C" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Option A." << endl;
            break;
        case 2:
            cout << "You selected Option B." << endl;
            break;
        case 3:
            cout << "You selected Option C." << endl;
            break;
        default:
            cout << "Invalid choice. Please choose 1, 2, or 3." << endl;
            break;
    }

    return 0;
}
