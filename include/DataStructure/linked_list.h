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

    void insert_start(int data);
    void insert_node(int data);

    void delete_last();
    void delete_start();
    void delete_node(int data);
    ~LinkedList();
};


#endif //UNTITLED_LINKED_LIST_H
