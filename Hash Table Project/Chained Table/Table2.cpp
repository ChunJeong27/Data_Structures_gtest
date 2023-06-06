#include "Table2.hpp"
#include "LinkedList.hpp"
#include <iostream>

Table::Table(HashFunc f)
{
    for (int i = 0; i < MAX_TBL; i++)
        LinkedList();

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
        &(this->tb1[hv])->insert(ns);

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