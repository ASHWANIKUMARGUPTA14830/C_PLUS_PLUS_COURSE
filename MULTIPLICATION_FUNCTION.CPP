#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1 = 6, num2 = 9;
    int product = multiply(num1, num2);

    cout << "Product: " << product << endl;

    return 0;
}
