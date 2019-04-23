//
// Created by zpoken on 23/04/19.
//

#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H


class Stack {
private:
    int top, size;
    signed int capacity;
    int *array;

public:
    Stack(unsigned int capacity);
    bool isEmpty();
    bool isFull();
    void push(int item);
    int pop();
    ~Stack();
};


#endif //UNTITLED_STACK_H
