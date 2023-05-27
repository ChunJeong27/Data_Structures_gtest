#ifndef __DEQUE_HPP__
#define __DEQUE_HPP__

// 양방향 연결 리스트 기반 덱(Deque)

class Deque
{
    using Data = int;

public:
    struct Node
    {
        Data data;
        Node* next;
        Node* prev;
    };

    Deque();
    bool isEmpty();

    void addFirst(Data data);
    void addLast(Data data);

    Data removeFirst();
    Data removeLast();

    Data getFirst();
    Data getLast();

private:
    Node* head;
    Node* tail;

};

#endif // __DEQUE_HPP__