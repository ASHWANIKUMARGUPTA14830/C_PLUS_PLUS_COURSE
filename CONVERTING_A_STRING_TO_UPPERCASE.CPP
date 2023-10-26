#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str = "Hello, World!";
    for (char& c : str) {
        c = std::toupper(c);
    }
    std::cout << "Uppercase string: " << str << std::endl;
    return 0;
}
