class Employee {
private:
    string name;
    double salary;
public:
    void setName(string name) {
        this->name = name;
    }
    void setSalary(double salary) {
        this->salary = salary;
    }
};

int main() {
    Employee e;
    //e.name = "John"; // Compilation error - private member not accessible outside the class
    e.setName("John");
    //e.salary = 5000; // Compilation error - private member not accessible outside the class
    e.setSalary(5000);
    return 0;
}
