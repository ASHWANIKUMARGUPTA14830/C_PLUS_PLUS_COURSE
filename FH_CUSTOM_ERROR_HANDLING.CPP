#include <iostream>
#include <fstream>
using namespace std;

void handleFileError(const string& errorMessage) {
    cerr << "File Error: " << errorMessage << endl;
}

int main() {
    ifstream file("input.txt");
    
    if (!file) {
        handleFileError("Failed to open the file!");
    } else {
        // Perform operations on the file

        if (file.fail()) {
            handleFileError("An error occurred while performing file operations!");
        } else if (file.eof()) {
            handleFileError("End of file reached!");
        }
        
        file.close();
    }

    return 0;
}
