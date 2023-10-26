#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    std::fstream file("output.txt", std::ios::in | std::ios::out | std::ios::trunc);

    if (file.is_open()) {
        double pi = 3.14159265358979323846;

        file << std::fixed << std::setprecision(10) << pi << std::endl;

        double readPi;
        file >> readPi;

        std::cout << "Read pi: " << readPi << std::endl;

        file.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
    }

    return 0;
}
