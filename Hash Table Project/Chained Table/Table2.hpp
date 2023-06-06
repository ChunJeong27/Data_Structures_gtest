#ifndef __TABLE2_H__
#define __TABLE2_H__

#include "Slot2.hpp"
#include "LinkedList.hpp"

int constexpr MAX_TBL = 100;

class Table
{
using HashFunc = int (*)(Key y);
using List = LinkedList;

public:
    Table(HashFunc f);
    void insert(Key k, Value v);
    Value remove(Key k);
    Value search(Key k);

private:
    List tbl[MAX_TBL];
    HashFunc hf;

};

#endif  // __TABLE2_H__