#include "DLinkedList.hpp"
#include <iostream>

LinkedList::LinkedList()
{
    this->head = new Node();
    this->comp = nullptr;
    this->numOfData = 0;
}

void LinkedList::firstInsert(LData data)
{
    Node* newNode = new Node();
    newNode->data = data;

    newNode->next = this->head->next;
    this->head->next = newNode;

    this->numOfData++;
}

void LinkedList::searchInsert(LData data)
{
    Node* newNode = new Node();
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

bool LinkedList::first(LData* pdata)
{
    if(this->head->next == nullptr)
        return false;
    
    this->before = this->head;
    this->cur = this->head->next;

    *pdata = this->cur->data;
    return true;
}

bool LinkedList::next(LData* pdata)
{
    if(this->cur->next == nullptr)
        return false;
    
    this->before = this->cur;
    this->cur = this->cur->next;

    *pdata = this->cur->data;
    return true;
}

LData LinkedList::remove()
{
    Node* rpos = this->cur;
    LData rdata = rpos->data;

    this->before->next = this->cur->next;
    this->cur = this->before;

    delete rpos;
    this->numOfData--;
    return rdata;
}

int LinkedList::count()
{
    return this->numOfData;
}