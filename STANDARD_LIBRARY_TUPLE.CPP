#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, std::string, double> values(42, "Hello", 3.14);
    std::cout << "Second value: " << std::get<1>(values) << std::endl;
    return 0;
}
