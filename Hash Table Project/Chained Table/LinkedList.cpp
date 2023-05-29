#include "LinkedList.hpp"
#include <iostream>

LinkedList::LinkedList()
{
    this->head = (Node*)malloc(sizeof(Node));
    this->head->next = nullptr;
    this->comp = nullptr;
    this->numOfData = 0;
}

void LinkedList::firstInsert(LData data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;

    newNode->next = this->head->next;
    this->head->next = newNode;

    (this->numOfData)++;
}

void LinkedList::searchInsert(LData data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* pred = this->head;
    newNode->data = data;

    while(pred->next != nullptr && this->comp(data, pred->next->data) != 0)
        pred = pred->next;

    newNode->next = pred->next;
    pred->next = newNode;

    (this->numOfData)++;
}

void LinkedList::insert(LData data)
{
    if(this->comp == nullptr)
        firstInsert(data);
    else
        searchInsert(data);
}

