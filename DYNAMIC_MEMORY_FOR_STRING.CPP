#include <iostream>
#include <string>

int main() {
    std::string* dynamicString = new std::string("Dynamic memory allocation.");

    // Access and display the dynamic string
    std::cout << "Dynamic String: " << *dynamicString << std::endl;

    // Deallocate the dynamic string
    delete dynamicString;

    return 0;
}
