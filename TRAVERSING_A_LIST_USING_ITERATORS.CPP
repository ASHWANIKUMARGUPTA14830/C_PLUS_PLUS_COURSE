#include <iostream>
#include <list>

int main() {
    std::list<std::string> names = {"Alice", "Bob", "Charlie"};

    for (std::list<std::string>::iterator it = names.begin(); it != names.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
