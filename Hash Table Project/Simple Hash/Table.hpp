#ifndef __TABLE_H__
#define __TABLE_H__

#include "Slot.hpp"

int constexpr MAX_TBL = 100;

class Table
{
using HashFunc = int (*)(Key y);

public:
    Table(HashFunc f);
    void insert(Key k, Value v);
    Value remove(Key k);
    Value search(Key k);

private:
    Slot tb1[MAX_TBL];
    HashFunc hf;

};

#endif  // __TABLE_H__