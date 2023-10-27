#include <iostream>
#include <fstream>
using namespace std;

bool fileExists(const string& filename) {
    ifstream file(filename);
    return file.good(); // Check if the file exists
}

int main() {
    string filename = "input.txt";
    if (fileExists(filename)) {
        cout << "File exists!" << endl;
    } else {
        cout << "File does not exist!" << endl;
    }

    return 0;
}
