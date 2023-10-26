#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    char firstChar = str[0];
    char lastChar = str[str.length() - 1];
    std::cout << "First character: " << firstChar << std::endl;
    std::cout << "Last character: " << lastChar << std::endl;
    return 0;
}
