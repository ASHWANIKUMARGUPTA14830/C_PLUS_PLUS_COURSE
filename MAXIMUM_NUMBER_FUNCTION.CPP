#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 12, num2 = 8;
    int maximum = max(num1, num2);

    cout << "Maximum number: " << maximum << endl;

    return 0;
}
