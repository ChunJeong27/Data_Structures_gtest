#include <iostream>
#include "Point.hpp"

void Point::setPointPos(int x, int y)
{
    this->xpos = x;
    this->ypos = y;
}

void Point::showPointPos()
{
    std::cout << '[' << xpos << ", " 
        << ypos << ']' << std::endl;
}

int Point::pointComp(Point const& pos)
{
    return (this->xpos == pos.xpos && this->ypos == pos.ypos) ? 0 
        : (this->xpos == pos.xpos) ? 1
        : (this->ypos == pos.ypos) ? 2
        : -1;
}

// int Point::getXpos() const
// {
//     return xpos;
// }

// int Point::getYpos() const
// {
//     return ypos;
// }