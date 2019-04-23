#include <iostream>
#include "../../include/DataStructure/stack.h"

using std::cout;
using std::endl;

Stack::Stack(unsigned int capacity) {
    this->capacity = capacity;
    this->array = new int[(this->capacity * sizeof(int))];
    this->top = -1;
}

bool Stack::isEmpty() {
    if (this->top == -1)
    {
        cout << "Stack is empty" << endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool Stack::isFull() {
    if (this->top == (this->capacity - 1))
    {
        cout << "Stack is full" << endl;
        return true;
    }
    else
    {
        return false;
    }
}
void Stack::push(int item){
    if (this->isFull())
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        this->array[++this->top] = item;
    }
}

int Stack::pop() {
    if (this->isEmpty())
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        return this->array[this->top++];
    }
}

Stack::~Stack() {
    delete [] this->array;
}