#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {1, 2, 3, 4, 5};

    for (std::deque<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
