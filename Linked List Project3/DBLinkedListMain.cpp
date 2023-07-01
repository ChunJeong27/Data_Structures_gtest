#include <iostream>
#include "DBLinkedList.hpp"

int main(void)
{
    // 양방향 연결 리스트의 생성 및 초기화
    List list;
    int data;

    // 8개의 데이터 저장
    list.insert(1); list.insert(2);
    list.insert(3); list.insert(4);
    list.insert(5); list.insert(6);
    list.insert(7); list.insert(8);

    // 저장된 데이터의 조회
    if(list.first(&data))
    {
        std::cout << data << ' ';

        // 오른쪽 노드로 이동하며 데이터 조회
        while(list.next(&data))
            std::cout << data << ' ';

        // 왼쪽 노드로 이동하며 데이터 조회
        while(list.previous(&data))
            std::cout << data << ' ';

        std::cout << '\n' << std::endl;
    }

    return 0;
}