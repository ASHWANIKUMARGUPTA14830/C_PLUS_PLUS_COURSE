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
    node2->next = node1;  // Circular reference

    // Nodes are not destructed due to circular reference

    return 0;
}
