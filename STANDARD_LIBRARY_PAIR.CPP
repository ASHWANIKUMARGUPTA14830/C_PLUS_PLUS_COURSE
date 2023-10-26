#include <iostream>
#include <utility>

int main() {
    std::pair<int, std::string> values(42, "Hello");
    std::cout << "Second value: " << values.second << std::endl;
    return 0;
}
