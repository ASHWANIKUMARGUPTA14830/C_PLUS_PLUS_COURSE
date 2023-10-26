class Calculator {
public:
    inline int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    int sum = calc.add(5, 10);
    cout << "Sum: " << sum << endl;
    return 0;
}
