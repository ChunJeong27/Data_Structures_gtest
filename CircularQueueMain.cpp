#include <iostream>

#include "../DS_Queue/CircularQueue.hpp"

int main()
{
    Queue q;
    
    q.enqueue(1);   q.enqueue(2);
    q.enqueue(3);   q.enqueue(4);
    q.enqueue(5);

    while(!q.isEmpty())
        std::cout << q.dequeue() << ' ';

    return 0;
}