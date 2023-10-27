#include <iostream>

class EventListener {
public:
    void handleEvent() {
        std::cout << "Event received by EventListener." << std::endl;
    }
};

class EventProducer {
public:
    void registerListener(EventListener* listener, void (EventListener::*callback)()) {
        listener_ = listener;
        callback_ = callback;
    }

    void fireEvent() {
        if (listener_ && callback_) {
            (listener_->*callback_)();
        }
    }

private:
    EventListener* listener_;
    void (EventListener::*callback_)();
};

int main() {
    EventListener listener;
    EventProducer producer;

    producer.registerListener(&listener, &EventListener::handleEvent);
    producer.fireEvent();

    return 0;
}
