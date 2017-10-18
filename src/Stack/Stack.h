#include "../LinkedList/LinkedList.h"

class Stack {
private:
    LinkedList* data;
public:
    Stack();
    ~Stack();

    void Push(int);
    int Pop();
    int Count();
};
