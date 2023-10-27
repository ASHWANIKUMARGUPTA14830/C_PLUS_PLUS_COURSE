#include <iostream>

class Printable {
public:
    virtual void print() = 0;
};

class Document : public Printable {
public:
    void print() override {
        std::cout << "Printing a document." << std::endl;
    }
};

class Photo : public Printable {
public:
    void print() override {
        std::cout << "Printing a photo." << std::endl;
    }
};

int main() {
    Document doc;
    Photo photo;

    Printable* items[] = {&doc, &photo};

    for (Printable* item : items) {
        item->print();
    }

    return 0;
}
