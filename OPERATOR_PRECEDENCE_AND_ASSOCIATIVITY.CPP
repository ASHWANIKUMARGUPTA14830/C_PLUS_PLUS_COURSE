#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3, c = 2;
    int result = a + b * c; // Operator precedence: * has higher precedence than +

    cout << "Result: " << result << endl;

    return 0;
}
