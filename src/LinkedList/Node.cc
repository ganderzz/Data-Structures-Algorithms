#include "Node.h"
#include <iostream>

Node::Node() {
    this->value = 0; 
    this->next = nullptr;
}

Node::Node(int value) {
    this->value = value;
    this->next = nullptr;
}