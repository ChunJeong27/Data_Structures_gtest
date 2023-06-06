#include <iostream>
#include "Person.hpp"
#include "Table2.hpp"

int main()
{
    auto MyHashFunc = [](int k)
    {
        return k % 100;
    };

    Table myTbl(MyHashFunc);
    Person* np;
    Person* sp;
    Person* rp;

    // 데이터 입력
    np = np->makePersonData(900254, "Lee", "Seoul");
    myTbl.insert(np->getSSN(), np);

    np = np->makePersonData(900139, "KIM", "Jeju");
    myTbl.insert(np->getSSN(), np);

    np = np->makePersonData(900827, "HAN", "Kangwon");
    myTbl.insert(np->getSSN(), np);

    // 데이터 탐색
    sp = myTbl.search(900254);
    if(sp != nullptr)
        sp->showPerInfo();

    sp = myTbl.search(900139);
    if(sp != nullptr)
        sp->showPerInfo();

    sp = myTbl.search(900827);
    if(sp != nullptr)
        sp->showPerInfo();

    // 데이터 삭제
    rp = myTbl.remove(900254);
    if(rp != nullptr)
        free(rp);

    rp = myTbl.remove(900139);
    if(rp != nullptr)
        free(rp);

    rp = myTbl.remove(900827);
    if(rp != nullptr)
        free(rp);

    return 0;
}