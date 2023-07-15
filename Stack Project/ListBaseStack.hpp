#ifndef __LB_STACK_H__
#define __LB_STACK_H__

using Data = int;

class ListStack
{
    struct Node
    {
        Data data;
        struct Node* next;
    };

public:
    ListStack();
    bool isEmpty();

    void push(Data data);
    Data pop();
    Data peek();

private:
    Node* head;

};

using Stack = ListStack;

#endif  // __LB_STACK_H__