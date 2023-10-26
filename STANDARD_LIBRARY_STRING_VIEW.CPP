#include <iostream>
#include <string>
#include <string_view>

int main() {
    std::string str = "Hello, World!";
    std::string_view view(str);
    std::cout << "Length of string view: " << view.length() << std::endl;
    return 0;
}
