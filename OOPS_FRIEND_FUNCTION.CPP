class Employee {
private:
    string name;
public:
    Employee(string name) {
        this->name = name;
    }
    friend void displaySalary(Employee e);
};

void displaySalary(Employee e) {
    cout << e.name << " earns $5000 per month" << endl;
}

int main() {
    Employee e("John");
    displaySalary(e); // Output: John earns $5000 per month
    return 0;
}
