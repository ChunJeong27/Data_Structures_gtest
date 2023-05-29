#include <iostream>
#include "Person.hpp"
#include "Table.hpp"

int main()
{
    auto MyHashFunc = [](int k){return k % 100;};

    Person* np;
    Person* sp;
    Person* rp;
    Table myTb1(MyHashFunc);

    np = np->makePersonData(20120003, "Lee", "Seoul");
    myTb1.insert(np->getSSN(), np);

    np = np->makePersonData(20130012, "KIM", "Jeju");
    myTb1.insert(np->getSSN(), np);

    np = np->makePersonData(20170049, "HAN", "Kangwon");
    myTb1.insert(np->getSSN(), np);

    sp = myTb1.search(20120003);
    if(sp != nullptr)
        sp->showPerInfo();
    
    sp = myTb1.search(20130012);
    if(sp != nullptr)
        sp->showPerInfo();

    sp = myTb1.search(20170049);
    if(sp != nullptr)
        sp->showPerInfo();

    rp = myTb1.remove(20120003);
    if(rp != nullptr)
        free(rp);

    rp = myTb1.remove(20130012);
    if(rp != nullptr)
        free(rp);

    rp = myTb1.remove(20170049);
    if(rp != nullptr)
        free(rp);

    return 0;
}