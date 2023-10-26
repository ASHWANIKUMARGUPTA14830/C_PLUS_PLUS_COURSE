#include <iostream>

using namespace std;

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    string myName = "Alice";
    greet(myName);
    return 0;
}
