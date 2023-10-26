class MathUtils {
public:
    static int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    int result = MathUtils::multiply(5, 10);
    cout << "Result: " << result << endl;
    return 0;
}
