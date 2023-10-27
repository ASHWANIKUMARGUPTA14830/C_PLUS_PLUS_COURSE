#include <iostream>

class CustomResource {
public:
    CustomResource(const std::string& name) : name_(name) {
        std::cout << "Resource " << name_ << " acquired." << std::endl;
    }

    ~CustomResource() {
        std::cout << "Resource " << name_ << " released." << std::endl;
    }

private:
    std::string name_;
};

int main() {
    CustomResource resource1("A");
    {
        CustomResource resource2("B");
        // Use resource2 within this scope
    }
    // resource2 is automatically released when it goes out of scope

    // Use resource1

    // resource1 is automatically released when it goes out of scope

    return 0;
}
