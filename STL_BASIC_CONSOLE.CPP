#include <iostream>
#include <string>

int main() {
    int x;
    double y;
    std::string str;

    std::cout << "Enter an integer: ";
    std::cin >> x;

    std::cout << "Enter a double: ";
    std::cin >> y;

    std::cout << "Enter a string: ";
    std::cin.ignore();
    getline(std::cin, str);

    std::cout << "You entered: x = " << x << ", y = " << y << ", str = \"" << str << "\"" << std::endl;

    return 0;
}
