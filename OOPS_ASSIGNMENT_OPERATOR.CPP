class Animal {
public:
    Animal() {
        cout << "Animal constructor called" << endl;
    }
    
    virtual ~Animal() {
        cout << "Animal destructor called" << endl;
    }
    
    virtual void makeSound() {
        cout << "Animal is making a sound" << endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        cout << "Dog constructor called" << endl;
    }
    
   ~Dog() {
        cout << "Dog destructor called" << endl;
   }
    
   void makeSound() {
        cout << "Dog is barking" << endl;
   }
   
   Dog& operator=(const Dog& other) { // Assignment operator
       if (this != &other) { // Check for self-assignment
           // Copy data members here
       }
       return *this; // Return reference to this object
   }
};

int main() {
