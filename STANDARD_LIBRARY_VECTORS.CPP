#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6);
    numbers.pop_back();
    std::cout << "Size of vector: " << numbers.size() << std::endl;
    return 0;
}
