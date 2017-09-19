#include <iostream>
#include "Node.h"

class LinkedList {
private:
    Node* root;
public:
    LinkedList();
    ~LinkedList();
    void Add(int value);
    void Remove(int value);
    std::string ToString();
};