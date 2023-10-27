#include <iostream>
#include <mutex>
#include <thread>

class ThreadSafeCounter {
public:
    ThreadSafeCounter() : value(0) {}

    int increment() {
        std::lock_guard<std::mutex> lock(mutex);
        return ++value;
    }

    int getValue() {
        std::lock_guard<std::mutex> lock(mutex);
        return value;
    }

private:
    int value;
    std::mutex mutex;
};

int main() {
    ThreadSafeCounter counter;

    std::thread thread1([&counter]() {
        for (int i = 0; i < 1000; ++i) {
            counter.increment();
        }
    });

    std::thread thread2([&counter]() {
        for (int i = 0; i < 1000; ++i) {
            counter.increment();
        }
    });

    thread1.join();
    thread2.join();

    std::cout << "Final counter value: " << counter.getValue() << std::endl;

    return 0;
}
