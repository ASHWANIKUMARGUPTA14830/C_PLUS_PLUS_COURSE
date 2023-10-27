#include <iostream>

// Event handler function pointer type
typedef void (*EventHandler)();

// Event handling function
void handleEvent(EventHandler event) {
    std::cout << "Event received. ";
    event();  // Call the event handler
}

// Event handler functions
void onButtonClicked() {
    std::cout << "Button clicked." << std::endl;
}

void onMenuItemSelected() {
    std::cout << "Menu item selected." << std::endl;
}

int main() {
    EventHandler buttonEvent = onButtonClicked;
    EventHandler menuEvent = onMenuItemSelected;

    handleEvent(buttonEvent);
    handleEvent(menuEvent);

    return 0;
}
