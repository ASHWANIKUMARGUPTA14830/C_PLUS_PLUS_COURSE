#include <iostream>
using namespace std;

int main() {
    double prices[4] = {19.99, 29.99, 9.99, 49.99};

    for (int i = 0; i < 4; i++) {
        cout << "Price " << i + 1 << ": $" << prices[i] << endl;
    }

    return 0;
}
