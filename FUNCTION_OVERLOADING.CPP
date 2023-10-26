#include <iostream>

using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

float max(float a, float b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 5;
    int y = 3;
    float a = 2.5;
    float b = 4.7;
    cout << "The maximum of " << x << " and " << y << " is " << max(x, y) << endl;
    cout << "The maximum of " << a << " and " << b << " is " << max(a, b) << endl;
    return 0;
}
