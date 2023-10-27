#include <iostream>
#include <vector>

class Event {
public:
    virtual void execute() = 0;
};

class EventHandler {
public:
    void addEvent(Event* event) {
        events.push_back(event);
    }

    void processEvents() {
        for (Event* event : events) {
            event->execute();
        }
    }

private:
    std::vector<Event*> events;
};

class CustomEvent : public Event {
public:
    CustomEvent(int data) : data(data) {}

    void execute() override {
        std::cout << "CustomEvent executed with data: " << data << std::endl;
    }

private:
    int data;
};

int main() {
    EventHandler handler;

    CustomEvent event1(42);
    CustomEvent event2(100);

    Event* eventPtr1 = &event1;
    Event* eventPtr2 = &event2;

    handler.addEvent(eventPtr1);
    handler.addEvent(eventPtr2);

    handler.processEvents();

    return 0;
}
