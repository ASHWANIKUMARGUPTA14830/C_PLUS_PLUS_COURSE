#include <iostream>
#include <array>
#include <span>

int main() {
    std::array<int, 5> numbers = {1, 2, 3, 4, 5};
    std::span<int> view(numbers);
    for (const auto& number : view) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
    return 0;
}
