#include <iostream>
using namespace std;

int main() {
    int a = 5; // 101 in binary
    int b = 3; // 011 in binary

    int bitwise_and = a & b;
    int bitwise_or = a | b;
    int bitwise_xor = a ^ b;
    int bitwise_not_a = ~a;

    cout << "Bitwise AND: " << bitwise_and << endl;
    cout << "Bitwise OR: " << bitwise_or << endl;
    cout << "Bitwise XOR: " << bitwise_xor << endl;
    cout << "Bitwise NOT (a): " << bitwise_not_a << endl;

    return 0;
}
