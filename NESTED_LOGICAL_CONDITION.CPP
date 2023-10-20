#include <iostream>
using namespace std;

int main() {
    int age;
    char gender;
    bool isStudent;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (M/F): ";
    cin >> gender;
    cout << "Are you a student (1 for Yes, 0 for No): ";
    cin >> isStudent;

    if (age >= 18) {
        if (gender == 'M' || gender == 'F') {
            if (isStudent) {
                cout << "You are an adult " << (gender == 'M' ? "male" : "female") << " student." << endl;
            } else {
                cout << "You are an adult " << (gender == 'M' ? "male" : "female") << " non-student." << endl;
            }
        } else {
            cout << "Invalid gender input." << endl;
        }
    } else {
        cout << "You are not an adult." << endl;
    }

    return 0;
}
