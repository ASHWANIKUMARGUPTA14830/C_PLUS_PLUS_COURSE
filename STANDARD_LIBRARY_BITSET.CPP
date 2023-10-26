#include <iostream>
#include <bitset>

int main() {
    std::bitset<8> bits("10101010");
    std::cout << "Number of set bits: " << bits.count() << std::endl;
    return 0;
}
