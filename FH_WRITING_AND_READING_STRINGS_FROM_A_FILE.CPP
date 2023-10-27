#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream writeFile("output.txt");
    
    if (writeFile.is_open()) {
        string message = "Hello, World!";
        writeFile << message; // Write string to the file
        writeFile.close();
        
        ifstream readFile("output.txt");
        
        if (readFile.is_open()) {
            string content;
            getline(readFile, content); // Read entire line from the file
            cout << content << endl; // Output: Hello, World!
            readFile.close();
        }
    }

    return 0;
}
