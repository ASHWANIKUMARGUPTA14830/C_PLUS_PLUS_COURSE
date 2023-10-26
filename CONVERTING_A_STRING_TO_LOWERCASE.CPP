#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str = "Hello, World!";
    for (char& c : str) {
        c = std::tolower(c);
    }
    std::cout << "Lowercase string: " << str << std::endl;
    return 0;
}
