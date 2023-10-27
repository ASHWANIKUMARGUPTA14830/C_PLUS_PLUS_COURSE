#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt"); // Open a file for writing

    if (file.is_open()) {
        file << "Hello, World!"; // Write to the file
        file.close(); // Close the file
    }

    return 0;
}
