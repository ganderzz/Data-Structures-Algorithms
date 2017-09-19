#include "LinkedList.h"

LinkedList::LinkedList() {
    this->root = new Node::Node();
}

LinkedList::~LinkedList() {
    Node::Node* n = this->root;
    while(n != nullptr) {
        this->Remove(n->value);
    }

    delete this;
}

void LinkedList::Add(int value) {
    Node::Node* n = this->root;
    while(n->next != nullptr) {
        n = n->next;
    }

    n->next = new Node::Node(value);
}

void LinkedList::Remove(int value) {
    Node::Node* prev = this->root;
    Node::Node* n = this->root->next;
    while(prev->next != nullptr) {
        if (n->value == value) {
            prev->next = n->next;
            delete n;
            break;  
        }
        prev = prev->next;
        n = n->next;
    }
}

std::string LinkedList::ToString() {
    std::string result = "";
    Node::Node* n = this->root;

    while(n->next != nullptr) {
        n = n->next;
        result += std::to_string(n->value) + ", ";
    }

    return result;
}