#include <iostream>
using namespace std;

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero." << endl;
        return 0.0;
    }
}

int main() {
    double num1 = 20.0, num2 = 4.0;
    double result = divide(num1, num2);

    cout << "Result of division: " << result << endl;

    return 0;
}
