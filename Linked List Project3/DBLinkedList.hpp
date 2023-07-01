#ifndef __DB_LINKED_LIST_H__
#define __DB_LINKED_LIST_H__

#include <iostream>

class DBLinkedList
{
    using Data = int;

    class Node
    {
    public:
        Data data;
        Node* next;
        Node* prev;
    };

public:
    DBLinkedList();
    void insert(Data data);

    bool first(Data* pdata);
    bool next(Data* pdata);
    bool previous(Data* pdata);
    int count();

private:
    Node* head;
    Node* cur;
    int numOfData;
};

using List = DBLinkedList;

#endif  // __DB_LINKED_LIST_H__