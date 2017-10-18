#include <iostream>
#include "./Stack.h"

int main() {
    auto stack = new Stack::Stack();

    stack->Push(5);
    stack->Push(10);

    std::cout << stack->Pop() << std::endl;
    std::cout << stack->Pop() << std::endl;

    delete stack;

    return 0;
}