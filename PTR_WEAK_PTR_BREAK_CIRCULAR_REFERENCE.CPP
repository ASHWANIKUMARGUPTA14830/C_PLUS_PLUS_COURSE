#include <iostream>
#include <memory>

struct Node {
    std::shared_ptr<Node> next;
};

int main() {
    std::shared_ptr<Node> node1 = std::make_shared<Node>();
    std::shared_ptr<Node> node2 = std::make_shared<Node>();
    node1->next = node2;
    node2->next = node1;  // No circular reference, thanks to weak_ptr.
    return 0;
}
