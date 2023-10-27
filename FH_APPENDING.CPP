#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt", ios::app); // Open a file for appending

    if (file.is_open()) {
        file << "This is an appended line."; // Append to the file
        file.close(); // Close the file
    }

    return 0;
}
