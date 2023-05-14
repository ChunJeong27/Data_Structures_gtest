#include <iostream>

#include "../DS_Queue/ListBaseQueue.hpp"
#include "../DS_Queue/SB_Output.hpp"

int main()
{
    Queue q;
    
    q.enqueue(1);   q.enqueue(2);
    q.enqueue(3);   q.enqueue(4);
    q.enqueue(5);

    while(!q.isEmpty())
        std::cout << q.dequeue() << ' ';

    SB_Output output;
    output.print();

    return 0;
}