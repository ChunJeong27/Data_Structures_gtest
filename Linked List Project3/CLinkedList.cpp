#include "CLinkedList.hpp"

CircularLinkedList::CircularLinkedList() 
: tail(nullptr), cur(nullptr), before(nullptr), numOfData(0)
{ }

void CircularLinkedList::insertFront(Data data)
{
    Node* newNode = new Node;
    newNode->data = data;

    if(this->tail == nullptr)
    {
        this->tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        newNode->next = this->tail->next;
        this->tail->next = newNode;
    }

    (this->numOfData++);
}

void CircularLinkedList::insert(Data data)
{
    Node* newNode = new Node;
    newNode->data = data;

    if(this->tail == nullptr)
    {
        this->tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        newNode->next = this->tail->next;
        this->tail->next = newNode;
        this->tail = newNode;
    }

    (this->numOfData)++;
}

bool CircularLinkedList::first(Data* pdata)
{
    if(this->tail == nullptr)
        return false;
    
    this->before = this->tail;
    this->cur = this->tail->next;

    *pdata = this->cur->data;
    return true;
}

bool CircularLinkedList::next(Data* pdata)
{
    if(this->tail == nullptr)
        return false;
    
    this->before = this->cur;
    this->cur = this->cur->next;

    *pdata = this->cur->data;
    return true;
}

CircularLinkedList::Data CircularLinkedList::remove()
{
    Node* rpos = this->cur;
    Data rdata = rpos->data;

    if(rpos == this->tail)
    {
        if(this->tail == this->tail->next)
            this->tail = nullptr;
        else
            this->tail = this->before;
    }

    this->before->next = this->cur->next;
    this->cur = this->before;

    delete rpos;
    (this->numOfData)--;
    return rdata;
}

int CircularLinkedList::count()
{
    return this->numOfData;
}