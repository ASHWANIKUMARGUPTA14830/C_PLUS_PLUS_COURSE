#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("output.txt", std::ios::app);

    if (file.is_open()) {
        file << "This line will be appended to the end of the file.\n";
        file.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
    }

    return 0;
}
