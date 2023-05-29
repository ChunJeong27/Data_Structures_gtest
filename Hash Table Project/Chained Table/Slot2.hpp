#ifndef __SLOT2_H__
#define __SLOT2_H__

#include "Person.hpp"

using Key = int;
using Value = Person*;

struct Slot
{
    Key key;
    Value val;
};

#endif // __SLOT2_H__