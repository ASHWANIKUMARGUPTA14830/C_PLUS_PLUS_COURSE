class Vehicle {
protected:
   int maxSpeed;
public:
   Vehicle(int s) { maxSpeed = s; }
};

class Car : virtual public Vehicle { // Virtual Inheritance
protected:
   int numWheels;
public:
   Car(int s, int w) : Vehicle
