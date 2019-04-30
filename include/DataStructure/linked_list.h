//
// Created by mak7 on 30.04.19.
//

#ifndef UNTITLED_LINKED_LIST_H
#define UNTITLED_LINKED_LIST_H


class Node{
public:
    Node* next;
    int data;
};


class LinkedList {
private:
    int length;
    Node *head, *tail;
public:
    LinkedList();
    void add_node(int data);
    void display();
    void insert_first(int data);
    void insert_position(int position, int data);
    void delete_first();
    void delete_last();
    void delete_position(int position);
    ~LinkedList();
};


#endif //UNTITLED_LINKED_LIST_H
