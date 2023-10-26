#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::string subStr = str.substr(7, 5);
    std::cout << "Substring: " << subStr << std::endl;
    return 0;
}
