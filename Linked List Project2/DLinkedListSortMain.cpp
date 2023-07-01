#include <iostream>
#include "DLinkedList.hpp"


int main(void)
{
    auto const WhoIsPrecede = [](int d1, int d2)
    {
        if(d1 > d2)
            return 0;
        else
            return 1;
    };

    List list;
    int data;

    list.setSortRule(WhoIsPrecede);

    list.insert(11);    list.insert(11);
    list.insert(22);    list.insert(22);
    list.insert(33);

    std::cout << "현재 데이터의 수: " << list.count() << std::endl;

    if(list.first(&data))
    {
        std::cout << data << ' ';

        while(list.next(&data))
            std::cout << data << ' ';
    }
    std::cout << std::endl;

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