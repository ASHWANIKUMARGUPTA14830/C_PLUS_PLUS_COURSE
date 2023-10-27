#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("example.txt");
    if (!file.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }
    // No file.close() to release resources
    // Resource leak occurs

    return 0;
}
