#include "Table.hpp"
#include <iostream>

Table::Table(HashFunc f)
{
    for (int i = 0; i < MAX_TBL; i++)
        (this->tb1[i]).status = SlotStatus::EMPTY;

        this->hf = f;
}

void Table::insert(Key k, Value v)
{
    int hv = this->hf(k);
    this->tb1[hv].val = v;
    this->tb1[hv].key = k;
    this->tb1[hv].status = SlotStatus::INUSE;
}

Value Table::remove(Key k)
{
    int hv = this->hf(k);

    if((this->tb1[hv].status != SlotStatus::INUSE))
        return nullptr;
    else
    {
        (this->tb1[hv]).status = SlotStatus::DELETED;
        return (this->tb1[hv]).val;
    }
}

Value Table::search(Key k)
{
    int hv = this->hf(k);

    if((this->tb1[hv]).status != SlotStatus::INUSE)
        return nullptr;
    else
        return (this->tb1[hv]).val;
}