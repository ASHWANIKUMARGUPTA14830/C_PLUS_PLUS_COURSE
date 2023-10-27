#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("example.txt");
    if (!file.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }
    // Properly using RAII - file is automatically closed when it goes out of scope

    return 0;
}
