#include <iostream>
using namespace std;

int main() {
    int number = 42;
    int *ptr = &number;

    cout << "Value: " << *ptr << endl;

    return 0;
}
