#include <iostream>

class SortStrategy {
public:
    virtual void sort(int arr[], int size) = 0;
};

class BubbleSort : public SortStrategy {
public:
    void sort(int arr[], int size) override {
        // Implement Bubble Sort
    }
};

class QuickSort : public SortStrategy {
public:
    void sort(int arr[], int size) override {
        // Implement Quick Sort
    }
};

class SortContext {
public:
    SortContext(SortStrategy* strategy) : strategy(strategy) {}

    void setStrategy(SortStrategy* newStrategy) {
        strategy = newStrategy;
    }

    void executeSort(int arr[], int size) {
        if (strategy) {
            strategy->sort(arr, size);
            std::cout << "Sorting complete." << std::endl;
        } else {
            std::cerr << "No sorting strategy set." << std::endl;
        }
    }

private:
    SortStrategy* strategy;
};

int main() {
    int data[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int size = sizeof(data) / sizeof(data[0]);

    SortContext context(new QuickSort);
    context.executeSort(data, size);

    context.setStrategy(new BubbleSort);
    context.executeSort(data, size);

    return 0;
}
