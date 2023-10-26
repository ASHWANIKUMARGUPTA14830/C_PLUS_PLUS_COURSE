#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        int x = i * 2;
        cout << "x: " << x << endl;
    }

    // cout << "x: " << x << endl; // Error: x is out of scope

    return 0;
}
