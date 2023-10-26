#include <iostream>
#include <fstream>

int main() {
    // Redirect cout to output.txt
    std::ofstream out("output.txt");
    auto coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(out.rdbuf());

    // Redirect cin to input.txt
    std::ifstream in("input.txt");
    auto cinbuf = std::cin.rdbuf();
    std::cin.rdbuf(in.rdbuf());

    // Use cout and cin as usual
    int x;
    double y;
    std:…[omitted]
