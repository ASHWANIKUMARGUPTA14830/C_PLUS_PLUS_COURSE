#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1, c;
    cout << "Fibonacci Series (first " << n << " terms): ";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int terms = 10;
    printFibonacci(terms);

    return 0;
}
