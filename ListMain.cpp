// PointListMain.c
#include <iostream>
#include "ArrayList.hpp"
#include "Point.hpp"

using namespace std;

int main(void)
{
    ArrayList list;
    //int data;
    Point compPos;
    Point data;

    //list.insert(11);    list.insert(11);
    //list.insert(22);    list.insert(22);
    //list.insert(33);

    Point pos1;
    pos1.setPointPos(2, 1);
    list.insert(pos1);

    Point pos2;
    pos2.setPointPos(2, 2);
    list.insert(pos2);

    Point pos3;
    pos3.setPointPos(3, 1);
    list.insert(pos3);

    Point pos4;
    pos4.setPointPos(3, 2);
    list.insert(pos4);

    cout << "현재 데이터의 수: " << list.count() << endl;

    if(list.first(data))
    {
        //cout << data << ' ';
        data.showPointPos();

        while(list.next(data))
            //cout << data << ' ';
            data.showPointPos();
    }
    cout << endl;

    compPos.setPointPos(2, 0);

    if(list.first(data))
    {
        //if(data == 22)
        if(data.pointComp(compPos) != -1)
            list.remove();

        while(list.next(data))
            //if(data == 22)
            if(data.pointComp(compPos) != -1)
                list.remove();
    }
    cout << endl;
    
    cout << "현재 데이터의 수: " << list.count() << endl;

    if(list.first(data))
    {
        //cout << data << ' ';
        data.showPointPos();


        while(list.next(data))
            //cout << data << ' ';
            data.showPointPos();

    }
    cout << endl;

    return 0;

}