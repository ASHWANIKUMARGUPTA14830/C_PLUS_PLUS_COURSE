#include <iostream>

using namespace std;

int main() {
    int x = 5;

    {
        int y = 10;
        cout << "Inside inner block: " << y << endl;
    }

    // cout << "Inside main block: " << y << endl; // Error: y is out of scope
    cout << "Inside main block: " << x << endl;

    return 0;
}
