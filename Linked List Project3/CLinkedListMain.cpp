#include <iostream>
#include "CLinkedList.hpp"

int main(void)
{
    // 원형 연결 리스트의 생성 및 초기화
    List list;
    int data, i, nodeNum;

    // 리스트에 5개의 데이터를 저장
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insertFront(2);
    list.insertFront(1);

    // 리스트에 저장된 데이터를 연속 3회 출력
    if(list.first(&data))
    {
        std::cout << data << ' ';

        for(i = 0; i < list.count()*3-1; i++)
        {
            if(list.next(&data))
                std::cout << data << ' ';
        }
    }
    std::cout << std::endl;

    // 2의 배수를 찾아서 모두 삭제
    nodeNum = list.count();

    if(nodeNum != 0)
    {
        list.first(&data);
        if(data%2 == 0)
            list.remove();

        for(i = 0; i < nodeNum-1; i++)
        {
            list.next(&data);
            if(data%2 == 0)
                list.remove();
        }
    }

    // 전체 데이터 1회 출력
    if(list.first(&data))
    {
        std::cout << data << ' ';

        for(i = 0; i < list.count()-1; i++)
        {
            if(list.next(&data))
                std::cout << data << ' ';
        }
    }
    return 0;
}