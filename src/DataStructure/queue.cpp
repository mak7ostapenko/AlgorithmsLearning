#include <iostream>
#include "../../include/DataStructure/queue.h"

using std::cout;
using std::endl;


/*
 * QUEUE
 */

// Array implementation Of Queue

Queue::Queue(unsigned int capacity) {
    this->capacity = capacity;
    this->front = this->size = 0;
    this->rear = capacity - 1;
    this->array = new int[(this->capacity * sizeof(int))];
}

int Queue::isEmpty() {
    return this->size == 0;
}

int Queue::isFull() {
    return this->size == this->capacity;
}

void Queue::enqueue(int item) {
    if (Queue::isFull())
    {
        cout << "Queue is full" << endl;
        return;
    }

    this->rear = (this->rear + 1) % this->capacity;
    this->array[this->rear] = item;
    this->size = this->size + 1;
    cout << item << " enqueued to queue\n";
}

int Queue::dequeue() {
    if (Queue::isEmpty())
    {
        cout << "Queue is empty." << endl;
        return INT8_MIN;
    }

    int item = this->array[this->front];
    this->front = (this->front + 1) % this->capacity;
    this->size = this->size - 1;

    return item;
}

int Queue::get_front() {
    if (Queue::isEmpty())
    {
        cout << "Queue is empty." << endl;
        return INT8_MIN;
    }

    return this->array[this->front];
}

int Queue::get_rear() {
    if (Queue::isEmpty())
    {
        cout << "Queue is empty." << endl;
        return INT8_MIN;
    }

    return this->array[this->rear];
}


Queue::~Queue() {
    delete [] this->array;
}
