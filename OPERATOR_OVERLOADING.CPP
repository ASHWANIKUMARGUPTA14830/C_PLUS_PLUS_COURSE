#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    Complex() : real(0), imag(0) {}

    Complex operator + (const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }
};

int main() {
    Complex num1, num2, sum;
    num1.real = 3;
    num1.imag = 4;
    num2.real = 1;
    num2.imag = 2;

    sum = num1 + num2;

    cout << "Sum: " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}
