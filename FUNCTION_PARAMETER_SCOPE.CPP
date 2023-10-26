#include <iostream>

using namespace std;

void printNumber(int number) {
    cout << "Number in function: " << number << endl;
}

int main() {
    int number = 10;
    cout << "Number in main: " << number << endl;
    printNumber(number);
    return 0;
}
