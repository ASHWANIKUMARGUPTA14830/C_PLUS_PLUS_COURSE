#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("input.txt");

    if (file.is_open()) {
        try {
            if (!file) {
                throw runtime_error("Failed to open the file.");
            }
            string line;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }

    return 0;
}
