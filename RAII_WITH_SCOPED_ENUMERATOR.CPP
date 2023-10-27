#include <iostream>

enum class ResourceState {
    Uninitialized,
    Initialized,
    Error
};

class Resource {
public:
    Resource() {
        state = ResourceState::Initialized;
    }

    ~Resource() {
        // Cleanup resources, if necessary
        state = ResourceState::Uninitialized;
    }

    ResourceState getState() const {
        return state;
    }

private:
    ResourceState state;
};

int main() {
    Resource resource;
    if (resource.getState() == ResourceState::Initialized) {
        std::cout << "Resource is initialized and ready for use." << std::endl;
    }

    // Resource is automatically uninitialized when it goes out of scope

    return 0;
}
