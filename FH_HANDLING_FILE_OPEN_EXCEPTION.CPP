#include <iostream>
#include <fstream>
using namespace std;

int main() {
    try {
        ifstream file("input.txt");
        if (!file) {
            throw runtime_error("Failed to open the file!");
        }

        // Perform operations on the file

        file.close();
    } catch (const exception& e) {
        cout << "Exception occurred: " << e.what() << endl;
    }

    return 0;
}
