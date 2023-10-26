#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> scores = {{"Alice", 95}, {"Bob", 80}, {"Charlie", 90}};

    for (std::map<std::string, int>::iterator it = scores.begin(); it != scores.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    return 0;
}
