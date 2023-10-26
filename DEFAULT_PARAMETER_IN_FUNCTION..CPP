#include <iostream>

using namespace std;

void greet(string name, string greeting = "Hello") {
    cout << greeting << ", " << name << "!" << endl;
}

int main() {
    string myName = "Alice";
    greet(myName);
    greet(myName, "Hi");
    return 0;
}
