#include <iostream>
int main() {
    std::set_terminate([](){
        std::cerr << "Unhandled exception, terminating." << std::endl;
        std::abort();
    });
    throw std::runtime_error("Unhandled exception");
    return 0;  // This line won't be reached.
}
