#include <iostream>
#include <thread>

const int NUM_THREADS = 4;

void processChunk(int* data, int start, int end, void (*processFunc)(int*)) {
    for (int i = start; i < end; ++i) {
        processFunc(&data[i]);
    }
}

void square(int* value) {
    *value *= *value;
}

void cube(int* value) {
    *value = (*value) * (*value) * (*value);
}

int main() {
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8};

    std::thread threads[NUM_THREADS];
    int chunkSize = sizeof(data) / NUM_THREADS;

    for (int i = 0; i < NUM_THREADS; ++i) {
        int start = i * chunkSize;
        int end = (i == NUM_THREADS - 1) ? sizeof(data) : start + chunkSize;
        void (*processFunc)(int*) = (i % 2 == 0) ? square : cube;
        threads[i] = std::thread(processChunk, data, start, end, processFunc);
    }

    for (int i = 0; i < NUM_THREADS; ++i) {
        threads[i].join();
    }

    for (int i = 0; i < sizeof(data) / sizeof(data[0]); ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
