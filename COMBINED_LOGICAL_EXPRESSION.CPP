#include <iostream>

int main() {
    bool condition1 = true;
    bool condition2 = false;
    bool condition3 = true;
    bool logicalResult = condition1 && (condition2 || condition3);

    std::cout << "Result of combined logical expression: " << logicalResult << std::endl;

    return 0;
}
