#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    int value = 3;
    auto it = std::find(numbers.begin(), numbers.end(), value);

    if (it != numbers.end()) {
        std::cout << "Value " << value << " found in the vector." << std::endl;
    } else {
        std::cout << "Value " << value << " not found in the vector." << std::endl;
    }

    return 0;
}
