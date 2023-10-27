#include <iostream>
#include <fstream>
#include <memory>

int main() {
    std::shared_ptr<std::ofstream> file = std::make_shared<std::ofstream>("example.txt");

    if (!file->is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    *file << "RAII with smart pointer for file handling." << std::endl;
    std::cout << "Data written to file." << std::endl;

    // File is automatically closed when the shared_ptr goes out of scope

    return 0;
}
