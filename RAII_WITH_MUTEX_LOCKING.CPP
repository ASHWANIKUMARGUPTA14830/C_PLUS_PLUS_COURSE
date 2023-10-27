#include <iostream>
#include <thread>
#include <mutex>

class LockGuard {
public:
    LockGuard(std::mutex& mtx) : mutex(mtx) {
        mutex.lock();
    }

    ~LockGuard() {
        mutex.unlock();
    }

private:
    std::mutex& mutex;
};

void printNumbers(int id, std::mutex& mtx) {
    LockGuard lock(mtx);
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Thread " << id << ": " << i << std::endl;
    }
}

int main() {
    std::mutex mtx;
    std::thread thread1(printNumbers, 1, std::ref(mtx));
    std::thread thread2(printNumbers, 2, std::ref(mtx));

    thread1.join();
    thread2.join();

    return 0;
}
