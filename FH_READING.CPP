#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("input.txt"); // Open a file for reading

    if (file.is_open()) {
        string line;
        while (getline(file, line)) { // Read line by line
            cout << line << endl; // Output each line
        }
        file.close(); // Close the file
    }

    return 0;
}
