#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    string userName = "Alice";
    greet(userName);

    return 0;
}
