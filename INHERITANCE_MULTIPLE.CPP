class Person {
protected:
    string name;
public:
    Person(string n) {
        name = n;
        cout << "Person object created" << endl;
    }
};

class Employee {
protected:
    double salary;
public:
    Employee(double s) {
        salary = s;
        cout << "Employee object created" << endl;
    }
};

class Manager : public Person, public Employee { // Multiple Inheritance
public:
    Manager(string n, double s) : Person(n), Employee(s) { // Call both base class constructors
        cout << "Manager object created" << endl;
    }
    
    void displayDetails() {
        cout << "Name: " << name << endl; // Access base class members
        cout << "Salary: " << salary << endl; // Access base class members
    }
};

int main() {
   Manager myManager("John", 50000);
   myManager.displayDetails();
   
   return 0;
}
