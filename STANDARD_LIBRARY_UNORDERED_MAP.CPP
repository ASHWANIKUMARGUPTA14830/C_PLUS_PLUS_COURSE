#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> ages;
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages.insert(std::make_pair("Charlie", 35));
    std::cout << "Age of Bob: " << ages["Bob"] << std::endl;
    return 0;
}
