#include <iostream>
#include <memory>

struct Node {
    std::shared_ptr<Node> next;
};

int main() {
    std::shared_ptr<Node> node1 = std::make_shared<Node>();
    std::shared_ptr<Node> node2 = std::make_shared<Node>();
    node1->next = node2;
    node2->next = node1;  // Circular reference and potential memory leak.
    return 0;
}
