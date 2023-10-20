#include <iostream>
using namespace std;

int main() {
    int age;
    char gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (M/F): ";
    cin >> gender;

    if (age >= 18) {
        if (gender == 'M' || gender == 'm') {
            cout << "You are an adult male." << endl;
        } else if (gender == 'F' || gender == 'f') {
            cout << "You are an adult female." << endl;
        } else {
            cout << "Invalid gender input." << endl;
        }
    } else {
        cout << "You are not an adult." << endl;
    }

    return 0;
}
    