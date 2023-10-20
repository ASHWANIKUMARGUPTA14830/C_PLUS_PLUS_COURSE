#include <iostream>
using namespace std;

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1 = 10, num2 = 4;
    int difference = subtract(num1, num2);

    cout << "Difference: " << difference << endl;

    return 0;
}
