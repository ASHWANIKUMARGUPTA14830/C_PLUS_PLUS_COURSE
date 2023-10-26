#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 2, 3, 2, 4, 2};

    int count = std::count(numbers.begin(), numbers.end(), 2);

    std::cout << "Number of occurrences of 2: " << count << std::endl;

    return 0;
}
