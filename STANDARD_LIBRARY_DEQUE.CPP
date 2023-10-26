#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers;
    numbers.push_back(1);
    numbers.push_front(2);
    numbers.push_back(3);
    std::cout << "Back element: " << numbers.back() << std::endl;
    return 0;
}
