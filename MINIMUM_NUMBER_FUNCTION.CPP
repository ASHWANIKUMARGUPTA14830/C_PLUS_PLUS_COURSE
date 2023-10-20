#include <iostream>
using namespace std;

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1 = 15, num2 = 9;
    int minimum = min(num1, num2);

    cout << "Minimum number: " << minimum << endl;

    return 0;
}
