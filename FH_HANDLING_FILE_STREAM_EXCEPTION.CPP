#include <iostream>
#include <fstream>
using namespace std;

int main() {
    try {
        fstream file("data.txt", ios::in | ios::out);
        if (!file) {
            throw runtime_error("Failed to open the file!");
        }

        // Perform operations on the file

        if (file.fail()) {
            throw runtime_error("An error occurred while performing file operations!");
        } else if (file.eof()) {
            throw runtime_error("End of file reached!");
        }

        file.close();
    } catch (const exception& e) {
        cout << "Exception occurred: " << e.what() << endl;
    }

    return 0;
}
