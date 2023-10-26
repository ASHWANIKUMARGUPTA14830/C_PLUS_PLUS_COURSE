#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        outputFile << "This is some text written to a file." << std::endl;
        outputFile.close();
        std::cout << "File written successfully." << std::endl;
    } else {
        std::cout << "Failed to open file." << std::endl;
    }
    return 0;
}
S