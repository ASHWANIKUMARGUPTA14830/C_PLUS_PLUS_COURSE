#include <iostream>
#include <fstream>

class FileHandler {
public:
    FileHandler(const std::string& filename) : file(filename) {
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file.");
        }
        std::cout << "File opened: " << filename << std::endl;
    }

    ~FileHandler() {
        file.close();
        std::cout << "File closed." << std::endl;
    }

    // Additional methods for reading, writing, etc.

private:
    std::fstream file;
};

int main() {
    try {
        FileHandler file("example.txt");
        // Use the file for reading, writing, etc.
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // File is automatically closed when it goes out of scope

    return 0;
}
