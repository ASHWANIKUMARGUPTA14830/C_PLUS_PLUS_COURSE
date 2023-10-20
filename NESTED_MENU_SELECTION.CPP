#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Choose an option:\n";
    cout << "1. Option A\n";
    cout << "2. Option B\n";
    cout << "3. Option C\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "You selected Option A." << endl;
    } else if (choice == 2) {
        cout << "You selected Option B." << endl;
    } else if (choice == 3) {
        cout << "You selected Option C." << endl;
    } else {
        cout << "Invalid choice. Please choose 1, 2, or 3." << endl;
    }

    return 0;
}
