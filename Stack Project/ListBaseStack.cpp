#include <iostream>
#include "ListBaseStack.hpp"

ListStack::ListStack() : head(nullptr)
{ }

bool ListStack::isEmpty()
{
    if(this->head == nullptr)
        return true;
    else
        return false;
}

void ListStack::push(Data data)
{
    Node* newNode = new Node;

    newNode->data = data;
    newNode->next = this->head;

    this->head = newNode;
}

Data ListStack::pop()
{
    Data rdata;
    Node* rnode;

    if(isEmpty())
    {
        std::cout << "Stack Memory Error!";
        exit(-1);
    }

    rdata = this->head->data;
    rnode = this->head;

    this->head = this->head->next;
    delete rnode;

    return rdata;
}

Data ListStack::peek()
{
    if(isEmpty())
    {
        std::cout << "Stack Memory Error!";
        exit(-1);
    }

    return this->head->data;
}