#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("input.txt");

    if (file) {
        string line;
        while (getline(file, line)) {
            // Process each line
        }

        if (file.bad()) {
            cout << "An error occurred while reading the file!" << endl;
        } else if (file.eof()) {
            cout << "End of file reached!" << endl;
        }
    } else {
        cout << "Failed to open the file!" << endl;
    }

    file.close();

    return 0;
}
