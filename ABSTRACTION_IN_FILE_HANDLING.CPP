#include <iostream>
#include <fstream>

int main() {
    std::string filename = "example.txt";
    
    std::ofstream fileOut(filename);
    if (fileOut.is_open()) {
        fileOut << "This is an example of file abstraction in C++." << std::endl;
        fileOut.close();
        std::cout << "File written successfully." << std::endl;
    } else {
        std::cerr << "Unable to open the file." << std::endl;
    }

    std::ifstream fileIn(filename);
    if (fileIn.is_open()) {
        std::string line;
        while (std::getline(fileIn, line)) {
            std::cout << line << std::endl;
        }
        fileIn.close();
    } else {
        std::cerr << "Unable to read the file." << std::endl;
    }

    return 0;
}
