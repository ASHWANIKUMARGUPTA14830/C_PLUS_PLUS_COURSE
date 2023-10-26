#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> ages;
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages.insert(std::make_pair("Charlie", 35));
    std::cout << "Age of Bob: " << ages["Bob"] << std::endl;
    return 0;
}
