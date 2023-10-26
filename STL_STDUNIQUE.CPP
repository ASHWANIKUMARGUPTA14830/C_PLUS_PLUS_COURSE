#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};

    auto it = std::unique(numbers.begin(), numbers.end());
    numbers.erase(it, numbers.end());

    std::cout << "Unique numbers: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
