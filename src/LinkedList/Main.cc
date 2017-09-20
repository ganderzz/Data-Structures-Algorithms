#include <iostream>
#include "./LinkedList.h"

int main() {
    LinkedList* t = new LinkedList();
    t->Add(2);
    t->Add(5);
    t->Add(10);

    std::cout << t->ToString() << std::endl;
    std::cout << "Count: " << t->Count() << std::endl;

    t->Remove(5);
    t->Remove(2);

    std::cout << t->ToString() << std::endl;
    std::cout << "Count: " << t->Count() << std::endl;

    delete t;

    return 0;
}