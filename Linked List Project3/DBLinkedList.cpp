#include "DBLinkedList.hpp"

DBLinkedList::DBLinkedList() : head(nullptr), numOfData(0)
{ }

void DBLinkedList::insert(Data data)
{
    Node* newNode = new Node;
    newNode->data = data;

    // 아래 문장에서 plist->head는 NULL이다!
    newNode->next = this->head;
    if(this->head != nullptr)
        this->head->prev = newNode;

    newNode->prev = nullptr;
    this->head = newNode;

    (this->numOfData)++;
}

bool DBLinkedList::first(Data* pdata)
{
    if(this->head == nullptr)
        return false;

    this->cur = this->head;
    *pdata = this->cur->data;

    return true;
}

bool DBLinkedList::next(Data* pdata)
{
    if(this->cur->next == nullptr)
        return false;
    
    this->cur = this->cur->next;
    *pdata = this->cur->data;

    return true;
}

bool DBLinkedList::previous(Data* pdata)
{
    if(this->cur->prev == nullptr)
        return false;

    this->cur = this->cur->prev;
    *pdata = this->cur->data;

    return true;    
}

int DBLinkedList::count()
{
    return this->numOfData;
}