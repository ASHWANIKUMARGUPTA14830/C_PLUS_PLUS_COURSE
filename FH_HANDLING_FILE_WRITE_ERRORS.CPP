#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt");

    if (file) {
        file << "Hello, World!";
        if (!file) {
            cout << "An error occurred while writing to the file!" << endl;
        }
    } else {
        cout << "Failed to open the file!" << endl;
    }

    file.close();

    return 0;
}
