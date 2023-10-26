#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::string subStr = "World";
    size_t pos = str.find(subStr);
    if (pos != std::string::npos) {
        std::cout << "Substring found at position: " << pos << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }
    return 0;
}
