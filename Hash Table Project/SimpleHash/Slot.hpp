#ifndef __SLOT_H__
#define __SLOT_H__

#include "Person.hpp"

enum class SlotStatus
{
    EMPTY,
    DELETED,
    INUSE,
};

using Key = int;
using Value = Person*;

struct Slot
{
    Key key;
    Value val;
    SlotStatus status;
};


#endif // __SLOT_H__