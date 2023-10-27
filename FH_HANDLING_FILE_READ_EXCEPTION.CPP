#include <iostream>
#include <fstream>
using namespace std;

int main() {
    try {
        ifstream file("input.txt");
        if (!file) {
            throw runtime_error("Failed to open the file!");
        }

        string line;
        while (getline(file, line)) {
            // Process each line
        }

        if (file.bad()) {
            throw runtime_error("An error occurred while reading the file!");
        } else if (file.eof()) {
            throw runtime_error("End of file reached!");
        }

        file.close();
    } catch (const exception& e) {
        cout << "Exception occurred: " << e.what() << endl;
    }

    return 0;
}
