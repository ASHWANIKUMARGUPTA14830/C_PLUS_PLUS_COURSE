#include <iostream>
#include <map>
#include <string>

class Event {
public:
    virtual void execute() const = 0;
};

class EventDispatcher {
public:
    void addListener(const std::string& eventName, void (*handler)()) {
        eventHandlers[eventName] = handler;
    }

    void dispatch(const std::string& eventName) {
        auto it = eventHandlers.find(eventName);
        if (it != eventHandlers.end()) {
            it->second();
        } else {
            std::cerr << "Event handler not found for event: " << eventName << std::endl;
        }
    }

private:
    std::map<std::string, void (*)()> eventHandlers;
};

void onEventA() {
    std::cout << "Event A handled." << std::endl;
}

void onEventB() {
    std::cout << "Event B handled." << std::endl;
}

int main() {
    EventDispatcher dispatcher;
    dispatcher.addListener("EventA", onEventA);
    dispatcher.addListener("EventB", onEventB);

    dispatcher.dispatch("EventA");
    dispatcher.dispatch("EventB");
    dispatcher.dispatch("EventC");

    return 0;
}
