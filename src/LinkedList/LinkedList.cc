#include "LinkedList.h"

LinkedList::LinkedList() {
    this->root = new Node::Node();
    this->count = 0;
}

LinkedList::~LinkedList() {  
    Node::Node* curr = this->root->next;

    while(curr != nullptr) {
        Node::Node* prev = curr;
        curr = curr->next;
        delete prev;
    }

    delete this->root;
}

void LinkedList::Add(int value) {
    Node::Node* n = this->root;
    while(n->next != nullptr) {
        n = n->next;
    }

    n->next = new Node::Node(value);
    this->count++;
}

void LinkedList::Remove(int value) {
    Node::Node* prev = this->root;
    Node::Node* n = this->root->next;
    while(prev->next != nullptr) {
        if (n->value == value) {
            prev->next = n->next;
            delete n;

            this->count--;

            break;  
        }
        prev = prev->next;
        n = n->next;
    }
}

int LinkedList::Count() {
    return this->count;
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