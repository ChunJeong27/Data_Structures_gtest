#include <iostream>
#include "src/Deque.hpp"

int main()
{
    // Deque의 생성 및 초기화
    Deque deq;

    // 데이터 넣기 1차
    deq.addFirst(3);
    deq.addFirst(2);
    deq.addFirst(1);

    deq.addLast(4);
    deq.addLast(5);
    deq.addLast(6);

    // 데이터 꺼내기 1차
    while(!deq.isEmpty())
        std::cout << deq.removeFirst() << ' ';
    std::cout << std::endl;

    // 데이터 넣기 2차
    deq.addFirst(3);
    deq.addFirst(2);
    deq.addFirst(1);

    deq.addLast(4);
    deq.addLast(5);
    deq.addLast(6);

    // 데이터 꺼내기 1차
    while(!deq.isEmpty())
        std::cout << deq.removeLast() << ' ';
    std::cout << std::endl;

    return 0;
}