#include "Deque.hpp"
#include <iostream>
#include <cstdlib>

Deque::Deque()
: head(nullptr), tail(nullptr)
{ }

bool Deque::isEmpty()
{
    if(this->head == nullptr)
        return true;
    else
        return false;
}

void Deque::addFirst(Data data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;

    newNode->next = this->head;

    if(isEmpty())
        this->tail = newNode;
    else
        this->head->prev = newNode;

    newNode->prev = nullptr;
    this->head = newNode;
}

void Deque::addLast(Data data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = this->tail;

    if(isEmpty())
        this->head = newNode;
    else
        this->tail->next = newNode;

    newNode->next = nullptr;
    this->tail = newNode;
}

Deque::Data Deque::removeFirst()
{
    Node* rnode = this->head;
    Data rdata;
    if(isEmpty())
    {
        std::cerr << "Deque Memory Error!" << std::endl;
        exit(-1);
    }
    rdata = this->head->data;

    this->head = this->head->next;
    free(rnode);

    if(this->head == nullptr)
        this->tail = nullptr;
    else
        this->head->prev = nullptr;

    return rdata;
}

Deque::Data Deque::removeLast()
{
    Node* rnode = this->tail;
    Data rdata;
    if(isEmpty())
    {
        std::cerr << "Deque Memory Error!" << std::endl;
        exit(-1);
    }
    rdata = this->tail->data;

    this->tail = this->tail->prev;
    free(rnode);

    if(this->tail == nullptr)
        this->head = nullptr;
    else
        this->tail->next = nullptr;

    return rdata;
}

Deque::Data Deque::getFirst()
{
    if(isEmpty())
    {
        std::cerr << "Deque Memory Error!" << std::endl;
        exit(-1);
    }
    
    return this->head->data;
}

Deque::Data Deque::getLast()
{
    if(isEmpty())
    {
        std::cerr << "Deque Memory Error!" << std::endl;
        exit(-1);
    }

    return this->tail->data;
}