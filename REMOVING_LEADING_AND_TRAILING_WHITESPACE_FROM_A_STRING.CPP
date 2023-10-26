#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str = "   Hello, World!   ";
    size_t startPos = str.find_first_not_of(" \t");
    size_t endPos = str.find_last_not_of(" \t");
    if (startPos != std::string::npos && endPos != std::string::npos) {
        std::string trimmedStr = str.substr(startPos, endPos - startPos + 1);
        std::cout << "Trimmed string: " << trimmedStr << std::endl;
    }
    return 0;
}
