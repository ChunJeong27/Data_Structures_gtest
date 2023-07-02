#include "ArrayBaseStack.hpp"

ArrayStack::ArrayStack() : topIndex(-1)
{ }

bool ArrayStack::isEmpty()
{
    if(this->topIndex == -1)
        return true;
    else
        return false;
}

void ArrayStack::push(Data data)
{
    this->topIndex += 1;
    this->stackArr[this->topIndex] = data;
}

ArrayStack::Data ArrayStack::pop()
{
    int rIdx;

    if(isEmpty())
    {
        std::cerr << "Stack Memory Error!" << std::endl;
        exit(-1);
    }

    rIdx = this->topIndex;
    this->topIndex -= 1;

    return this->stackArr[rIdx];
}

ArrayStack::Data ArrayStack::peek()
{
    if(isEmpty())
    {
        std::cerr << "Stack Memory Error!" << std::endl;
        exit(-1);
    }

    return this->stackArr[this->topIndex];
}