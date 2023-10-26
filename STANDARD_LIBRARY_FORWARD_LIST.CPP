#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_front(0);
    auto it = numbers.begin();
    ++it;
    numbers.insert_after(it, 6);
    std::cout << "Size of forward list: " << std::distance(numbers.begin(), numbers.end()) << std::endl;
    return 0;
}
