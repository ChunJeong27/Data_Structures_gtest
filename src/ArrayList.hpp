#ifndef __ARRAY_LIST_HPP__
#define __ARRAY_LIST_HPP__

#include "Point.hpp"

int const LIST_LEN = 100;
using LData = Point;

class ArrayList
{
public:
    ArrayList();
    void insert(LData const& data);

    int first(LData& data);
    int next(LData& data);

    LData remove();
    int count();

private:
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
    
};

#endif // _ARRAY_LIST_HPP__