class Counter {
private:
    static int count;
public:
    static void increment() {
        count++;
    }
    static int getCount() {
        return count;
    }
};

int Counter::count = 0;
