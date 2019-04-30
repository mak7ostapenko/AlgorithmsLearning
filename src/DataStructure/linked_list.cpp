#include <iostream>
#include <cstdlib>

#include "../../include/DataStructure/linked_list.h"

using std::cout;
using std::endl;


LinkedList::LinkedList() {
    this->length = 0;
    this->head = NULL;
    this->tail = NULL;
}

void LinkedList::add_node(int data) {
    // TODO: do we need free memory of new_node?
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;

    if (this->head == NULL)
    {
        this->head = new_node;
        this->tail = new_node;
        // TODO: decide what to do with new node
        new_node = NULL;
    }
    else
    {
        this->tail->next = new_node;
        this->tail = new_node;
    }

    this->length++;
}

void LinkedList::display() {
    Node *temp_node;
    temp_node = this->head;

    while (temp_node != NULL)
    {
        cout << "Data of node = " << temp_node->data << endl;
        temp_node = temp_node->next;
    }
}

void LinkedList::insert_first(int data) {
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = this->head;

    this->head = new_node;

    this->length++;
}

void LinkedList::insert_position(int position, int data) {
    if (position == this->length)
    {
        this->add_node(data);
    }
    else if (position == 0)
    {
        this->insert_first(data);
    }
    else
    {
        // TODO: where would be better declare next variables?
        Node *previous = new Node();
        Node *new_node = new Node();
        Node *current;

        current = this->head;

        // TODO: move search in separate function
        for(int i = 0; i < position; i++)
        {
            previous = current;
            current = current->next;
        }

        new_node->data = data;
        previous->next = new_node;
        new_node->next = current;
    }

    this->length++;
}

void LinkedList::delete_first() {
    if (this->length == 0)
    {
        cout << "WARNING: list is empty!" << endl;
        return;
    }

    this->head = this->head->next;
    this->length--;
}

void LinkedList::delete_last() {
    if (this->length == 0)
    {
        cout << "WARNING: list is empty!" << endl;
        return;
    }

    Node *previous = new Node();
    Node *current;

    current = this->head;

    for(int i = 1; current->next != NULL; i++)
    {
        previous = current;
        current = current->next;
    }
    this->tail = previous;
    previous->next = NULL;

    this->length--;
}

void LinkedList::delete_position(int position) {
    if (position == this->length)
    {
        this->delete_last();
    }
    else if (position == 0)
    {
        this->delete_first();
    }
    else
    {
        Node *previous = new Node();
        Node *current;

        current = this->head;

        for(int i = 0; i < position; i++)
        {
            previous = current;
            current = current->next;
        }

        previous->next = current->next;
    }

    this->length--;
}

LinkedList::~LinkedList() {
    // TODO: delete head and tail
    cout << "Linked list is deleted." << endl;
}