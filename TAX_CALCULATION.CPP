#include <iostream>
using namespace std;

int main() {
    double income;
    cout << "Enter your annual income: $";
    cin >> income;

    double tax = 0;

    if (income >= 0) {
        if (income <= 10000) {
            tax = 0;
        } else if (income <= 50000) {
            tax = income * 0.1;
        } else {
            tax = income * 0.2;
        }
    } else {
        cout << "Invalid income entered." << endl;
        return 1; // Exit with an error code
    }

    cout << "Tax owed: $" << tax << endl;

    return 0;
}
