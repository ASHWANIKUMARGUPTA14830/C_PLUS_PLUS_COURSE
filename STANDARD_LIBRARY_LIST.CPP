#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6);
    numbers.push_front(0);
    std::cout << "Size of list: " << numbers.size() << std::endl;
    return 0;
}
