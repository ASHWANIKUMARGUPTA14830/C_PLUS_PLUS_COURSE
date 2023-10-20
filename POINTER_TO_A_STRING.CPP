#include <iostream>
using namespace std;

int main() {
    string text = "Hello, World!";
    string *ptr = &text;

    cout << "Value: " << *ptr << endl;

    return 0;
}
