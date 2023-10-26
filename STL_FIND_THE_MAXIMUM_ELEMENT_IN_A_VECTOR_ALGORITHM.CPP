#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 2, 8, 3, 1};

    auto maxElement = std::max_element(numbers.begin(), numbers.end());

    std::cout << "Maximum element: " << *maxElement << std::endl;

    return 0;
}
