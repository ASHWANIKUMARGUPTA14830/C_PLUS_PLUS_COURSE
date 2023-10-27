#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("input.txt");
    if (!file) {
        cout << "Failed to open the file!" << endl;
    } else {
        // File opening was successful
        // Perform operations on the file
        file.close();
    }

    return 0;
}
