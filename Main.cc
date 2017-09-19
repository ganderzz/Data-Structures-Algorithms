#include <iostream>
#include "./src/LinkedList.h"

int main() {
    LinkedList* t = new LinkedList();
    t->Add(2);
    t->Add(5);
    t->Add(10);

    std::cout << t->ToString() << std::endl;

    t->Remove(5);

    std::cout << t->ToString() << std::endl;

    return 0;
}