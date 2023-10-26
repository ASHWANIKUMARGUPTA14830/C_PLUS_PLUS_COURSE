#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    bool isEmpty = str.empty();
    if (isEmpty) {
        std::cout << "String is empty." << std::endl;
    } else {
        std::cout << "String is not empty." << std::endl;
    }
    return 0;
}
