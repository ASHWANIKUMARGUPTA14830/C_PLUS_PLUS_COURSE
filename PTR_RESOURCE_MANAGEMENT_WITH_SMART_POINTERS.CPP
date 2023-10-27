#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<FILE> file(fopen("example.txt", "r"), fclose);
    if (file) {
        // Use file for reading.
    } // File is closed automatically when the shared_ptr goes out of scope.
    return 0;
}
