#include <iostream>
#include "ArrayList.hpp"

ArrayList::ArrayList()
: numOfData(0)
, curPosition(-1)
{
}

void ArrayList::insert(LData const& data)
{
    if(numOfData >= LIST_LEN)
    {
        std::cerr << "저장이 불가능합니다." << std::endl;
        return;
    }

    arr[numOfData] = data;
    numOfData++;
}

int ArrayList::first(LData& data)
{
    if(numOfData == 0)
        return false;
    
    curPosition = 0;
    data = arr[0];
    return true;
}

int ArrayList::next(LData& data)
{
    if(curPosition >= numOfData - 1)
        return false;
    
    curPosition++;
    data = arr[curPosition];
    return true;
}

LData ArrayList::remove()
{
    int rpos = curPosition;
    int num = numOfData;
    int i;
    LData rdata = arr[rpos];

    for(i = rpos; i < num - 1; i++)
        arr[i] = arr[i+1];
    
    numOfData--;
    curPosition--;
    return rdata;
}

int ArrayList::count()
{
    return numOfData;
}