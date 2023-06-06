#include "Table2.hpp"
#include "LinkedList.hpp"
#include <iostream>

Table::Table(HashFunc f)
{
    for (int i = 0; i < MAX_TBL; i++)
        this->tbl[i] = LinkedList();

        this->hf = f;
}

void Table::insert(Key k, Value v)
{
    int hv = this->hf(k);
    Slot ns = {k, v};

    if(search(k) != nullptr)
    {
        std::cout << "키 중복 오류 발생" << std::endl;
        return;
    }
    else
        this->tbl[hv].insert(ns);
}

Value Table::remove(Key k)
{
    int hv = this->hf(k);
    Slot cSlot;

    if(tbl[hv].first(&cSlot))
    {
        if(cSlot.key == k)
        {
            tbl[hv].remove();
            return cSlot.val;
        }
        else
        {
            while(tbl[hv].next(&cSlot))
            {
                if(cSlot.key == k)
                {
                    tbl[hv].remove();
                    return cSlot.val;
                }
            }
        }
    }

    return nullptr;
}

Value Table::search(Key k)
{
    int hv = this->hf(k);
    Slot cSlot;

    if(tbl[hv].first(&cSlot))
    {
        if(cSlot.key == k)
            return cSlot.val;
        else
        {
            while(tbl[hv].next(&cSlot))
            {
                if(cSlot.key == k)
                    return cSlot.val;
            }
        }
    }

    return nullptr;
}