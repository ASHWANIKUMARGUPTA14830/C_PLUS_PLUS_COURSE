#include <iostream>

using namespace std;

void printLocalVariable() {
    int localVariable = 5;
    cout << "Local Variable: " << localVariable << endl;
}

int main() {
    printLocalVariable();
    // cout << "Local Variable: " << localVariable << endl; // Error: localVariable is out of scope
    return 0;
}
