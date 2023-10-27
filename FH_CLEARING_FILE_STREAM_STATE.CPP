#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out);

    if (file) {
        file.clear(); // Clear any error flags
        // Perform operations on the file
    } else {
        cout << "Failed to open the file!" << endl;
    }

    file.close();

    return 0;
}
