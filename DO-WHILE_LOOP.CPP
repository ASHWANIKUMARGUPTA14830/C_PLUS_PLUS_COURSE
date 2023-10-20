#include <iostream>
using namespace std;

int main() {
    int number;
    
    do {
        cout << "Enter a positive number: ";
        cin >> number;

        if (number <= 0) {
            cout << "Invalid input. Please enter a positive number." << endl;
        }
    } while (number <= 0);

    cout << "You entered a valid positive number: " << number << endl;

    return 0;
}
