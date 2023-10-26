#include <iostream>

using namespace std;

int globalVariable = 10;

void printGlobalVariable() {
    cout << "Global Variable: " << globalVariable << endl;
}

int main() {
    cout << "Inside main function: " << globalVariable << endl;
    printGlobalVariable();
    return 0;
}
