#include <iostream>

using namespace std;

bool logical_xnor(bool a, bool b) {
    return (a && b) || (!a && !b);
}

int main() {
    bool input1 = true;
    bool input2 = false;

    bool output = logical_xnor(input1, input2);

    cout << "Input 1: " << input1 << endl;
    cout << "Input 2: " << input2 << endl;
    cout << "Output: " << output << endl;

    return 0;
}
