#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {1, 2, 3, 4, 5};
    numbers.insert(6);
    numbers.erase(3);
    std::cout << "Size of set: " << numbers.size() << std::endl;
    return 0;
}
