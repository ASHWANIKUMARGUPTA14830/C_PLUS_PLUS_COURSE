#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {3, 1, 4, 1, 5};

    for (std::set<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
