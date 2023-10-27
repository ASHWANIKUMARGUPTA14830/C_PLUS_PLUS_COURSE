#include <iostream>
#include <fstream>
using namespace std;

int main() {
    try {
        ofstream file("output.txt");
        if (!file) {
            throw runtime_error("Failed to open the file!");
        }

        file << "Hello, World!";
        if (!file) {
            throw runtime_error("An error occurred while writing to the file!");
        }

        file.close();
    } catch (const exception& e) {
        cout << "Exception occurred: " << e.what() << endl;
    }

    return 0;
}
