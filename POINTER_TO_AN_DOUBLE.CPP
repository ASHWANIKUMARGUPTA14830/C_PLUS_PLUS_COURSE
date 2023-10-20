#include <iostream>
using namespace std;

int main() {
    double value = 3.14;
    double *ptr = &value;

    cout << "Value: " << *ptr << endl;

    return 0;
}
