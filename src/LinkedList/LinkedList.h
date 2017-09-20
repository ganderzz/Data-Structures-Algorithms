#include <iostream>
#include "Node.h"

class LinkedList {
private:
    Node* root;
    unsigned int count;
public:
    LinkedList();
    virtual ~LinkedList();
    void Add(int value);
    void Remove(int value);
    std::string ToString();
    int Count();
};