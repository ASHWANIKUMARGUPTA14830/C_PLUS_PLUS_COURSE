#include <iostream>
#include <memory>

class Node {
public:
    std::shared_ptr<Node> next;
    Node() {
        std::cout << "Node created." << std::endl;
    }
    ~Node() {
        std::cout << "Node destroyed." << std::endl;
    }
};

int main() {
    std::shared_ptr<Node> node1 = std::make_shared<Node>();
    std::shared_ptr<Node> node2 = std::make_shared<Node>();

    node1->next = node2;
    node2->next = std::weak_ptr<Node>(node1);  // Avoid circular reference

    // Nodes are destructed properly when shared_ptr goes out of scope

    return 0;
}
