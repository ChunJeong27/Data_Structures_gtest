#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#include <iostream>

class ArrayStack
{
    using Data = int;

    static int const STACK_LEN = 100;

public:
    ArrayStack();
    bool isEmpty();

    void push(Data data);
    Data pop();
    Data peek();

private:
    Data stackArr[STACK_LEN];
    int topIndex;

};

using Stack = ArrayStack;

#endif  // __AB_STACK_H__