#ifndef __C_LINKED_LIST_H__
#define __C_LINKED_LIST_H__

#include <iostream>

class CircularLinkedList
{
    using Data = int;

    class Node
    {
    public:
        Data data;
        Node* next;
    };

public:
    CircularLinkedList();
    void insert(Data data);
    void insertFront(Data data);

    bool first(Data* pdata);
    bool next(Data* data);
    Data remove();
    int count();

private:
    Node* tail;
    Node* cur;
    Node* before;
    int numOfData;

};

using List = CircularLinkedList;

#endif  // __C_LINKED_LIST_H__