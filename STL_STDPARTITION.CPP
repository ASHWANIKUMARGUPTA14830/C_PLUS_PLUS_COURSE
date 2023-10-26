#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    auto it = std::partition(numbers.begin(), numbers.end(),
        [](int num) { return num % 2 == 0; });

    std::cout << "Even numbers: ";
    for (auto i = numbers.begin(); i != it; ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    std::cout << "Odd numbers: ";
    for (auto i = it; i != numbers.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    return 0;
}
