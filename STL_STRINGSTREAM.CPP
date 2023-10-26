#include <iostream>
#include <sstream>
#include <string>

int main() {
    int x = 42;
    double y = 3.14;

    std::stringstream ss;
    ss << "x = " << x << ", y = " << y;

    std::string str = ss.str();
    std::cout << str << std::endl;

    int readX;
    double readY;

    ss >> "x = " >> readX >> ", y = " >> readY;

    std::cout << "Read x: " << readX << ", y: " << readY << std::endl;

    return 0;
}
