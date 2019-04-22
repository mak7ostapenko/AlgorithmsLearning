//
// Created by zpoken on 22/04/19.
//

#ifndef UNTITLED_QUEUE_H
#define UNTITLED_QUEUE_H


class Queue{
private:
    int front, rear, size;
    unsigned int capacity;
    int *array;
public:
    Queue(unsigned int capacity);
    int isFull();
    int isEmpty();
    void enqueue(int item);
    int dequeue();
    int get_front();
    int get_rear();
    ~Queue();
};


#endif //UNTITLED_QUEUE_H
