#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt");

    if (file.is_open()) {
        try {
            if (!file) {
                throw runtime_error("Failed to open the file.");
            }
            file << "Hello, World!";
            file.close();
        } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }

    return 0;
}
