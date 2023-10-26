#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("output.txt");

    if (file.is_open()) {
        file << "Hello, world!\n";
        file << "This is a test.\n";
        file.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
    }

    return 0;
}
