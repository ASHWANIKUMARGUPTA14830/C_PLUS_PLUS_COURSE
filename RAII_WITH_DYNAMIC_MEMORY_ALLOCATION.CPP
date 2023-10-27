#include <iostream>
#include <memory>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }

    ~Resource() {
        std::cout << "Resource released." << std::endl;
    }
};

int main() {
    std::unique_ptr<Resource> resource = std::make_unique<Resource>();
    // Use the resource

    // Resource is automatically released when the unique_ptr goes out of scope

    return 0;
}
