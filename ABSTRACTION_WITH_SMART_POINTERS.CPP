#include <iostream>
#include <memory>

class Device {
public:
    virtual void performAction() = 0;
};

class Sensor : public Device {
public:
    void performAction() override {
        std::cout << "Sensor reading..." << std::endl;
    }
};

class Actuator : public Device {
public:
    void performAction() override {
        std::cout << "Actuator activated." << std::endl;
    }
};

int main() {
    std::shared_ptr<Device> sensor = std::make_shared<Sensor>();
    std::shared_ptr<Device> actuator = std::make_shared<Actuator>();

    sensor->performAction();
    actuator->performAction();

    return 0;
}
