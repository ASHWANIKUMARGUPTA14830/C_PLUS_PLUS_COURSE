#include <iostream>

void towersOfHanoi(int n, char source, char auxiliary, char target) {
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << target << std::endl;
        return;
    }

    towersOfHanoi(n - 1, source, target, auxiliary);
    std::cout << "Move disk " << n << " from " << source << " to " << target << std::endl;
    towersOfHanoi(n - 1, auxiliary, source, target);
}

int main() {
    int numDisks = 3;
    towersOfHanoi(numDisks, 'A', 'B', 'C');
    return 0;
}
