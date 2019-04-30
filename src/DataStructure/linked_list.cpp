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

void LinkedList::insert_start(int data) {
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = this->head;

    this->head = new_node;

    this->length++;
}


// delete node by value
void LinkedList::delete_node(int data) {

}

LinkedList::~LinkedList() {
    // TODO: delete head and tail
    cout << "Linked list is deleted." << endl;
}