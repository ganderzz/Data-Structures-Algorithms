#include "./Stack.h"

Stack::Stack() {
    this->data = new LinkedList::LinkedList();
}

void Stack::Push(int val) {
    this->data->Add(val);
}

int Stack::Pop() {
    if (this->data->Count() > 0) {
        int value = this->data->GetFirst();
        this->data->Remove(value);

        return value;
    }

    return -1;
}

int Stack::Count() {
    return this->data->Count();
}

Stack::~Stack() {
    delete this->data;
}