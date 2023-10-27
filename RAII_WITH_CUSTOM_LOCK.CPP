#include <iostream>
#include <mutex>

class CustomLock {
public:
    CustomLock(std::mutex& mtx) : mutex_(mtx) {
        mutex_.lock();
    }

    ~CustomLock() {
        mutex_.unlock();
    }

private:
    std::mutex& mutex_;
};

int main() {
    std::mutex mtx;
    {
        CustomLock lock(mtx);
        // Mutex is locked within this scope
        std::cout << "Mutex locked." << std::endl;
    }
    // Mutex is automatically unlocked when lock goes out of scope
    std::cout << "Mutex unlocked." << std::endl;

    return 0;
}
