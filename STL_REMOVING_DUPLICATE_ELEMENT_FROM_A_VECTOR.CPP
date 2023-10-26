#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 2, 3, 3, 4, 5};

    auto newEnd = std::unique(numbers.begin(), numbers.end());

    numbers.erase(newEnd, numbers.end());

    std::cout << "Vector after removing duplicates: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}