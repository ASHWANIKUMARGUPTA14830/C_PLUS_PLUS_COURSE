#include <iostream>

using namespace std;

int subtract(int a, int b);

int main() {
    int x = 5;
    int y = 3;
    int z = subtract(x, y);
    cout << "The difference between " << x << " and " << y << " is " << z << endl;
    return 0;
}

int subtract(int a, int b) {
    return a - b;
}
