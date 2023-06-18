#include <iostream>
#include "DLinkedList.hpp"

int main()
{
    // 리스트의 생성 및 초기화
    List list;
    int data;

    // 5개의 데이터 저장
    list.insert(11); list.insert(22);
    list.insert(33); list.insert(44);
    list.insert(55);

    // 저장된 데이터의 전체 출력
    std::cout << "현재 데이터의 수: " << list.count() << std::endl;

    if(list.first(&data))
    {
        std::cout << data << ' ';

        while(list.next(&data))
            std::cout << data << ' ';
    }
    std::cout << '\n' << std::endl;

    // 숫자 22을 검색하여 모두 삭제
    if(list.first(&data))
    {
        if(data == 22)
            list.remove();

        while(list.next(&data))
        {
            if(data == 22)
                list.remove();
        }
    }

    // 삭제 후 남아있는 데이터 전체 출력
    std::cout << "현재 데이터의 수: " << list.count() << std::endl;

    if(list.first(&data))
    {
        std::cout << data << ' ';

        while(list.next(&data))
            std::cout << data << ' ';
    }
    std::cout << '\n' << std::endl;

    return 0;
}