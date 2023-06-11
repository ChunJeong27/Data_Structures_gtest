#include <iostream>
#include "ArrayList.hpp"
#include "Point.hpp"

int main()
{
    ArrayList list;
    Point compPos;
    Point* ppos;

    // 4개의 데이터 저장
    ppos = new Point();
    ppos->setPointPos(2, 1);
    list.insert(*ppos);

    ppos = new Point();
    ppos->setPointPos(2, 2);
    list.insert(*ppos);

    ppos = new Point();
    ppos->setPointPos(3, 1);
    list.insert(*ppos);

    ppos = new Point();
    ppos->setPointPos(3, 2);
    list.insert(*ppos);

    std::cout << "현재 데이터의 수: " << list.count() << std::endl;

    if(list.first(*ppos))
    {
        ppos->showPointPos();

        while(list.next(*ppos))
            ppos->showPointPos();
    }
    std::cout << '\n';

    // xpos가 2인 모든 데이터 삭제
    // compPos.xpos = 2;
    // compPos.ypos = 0;
    compPos.setPointPos(2, 0);

    if(list.first(*ppos))
    {
        if(ppos->pointComp(compPos) == 1)
        {
            *ppos = list.remove();
            //free(ppos);
        }

        while(list.next(*ppos))
        {
            if(ppos->pointComp(compPos) == 1)
            {
                *ppos = list.remove();
                //free(ppos);
            }
        }
    }

    // 삭제 후 남은 데이터 전체 출력
    std::cout << "현재 데이터의 수: " << list.count() << std::endl;

    if(list.first(*ppos))
    {
        ppos->showPointPos();

        while(list.next(*ppos))
            ppos->showPointPos();
    }
    std::cout << '\n';

    return 0;
}