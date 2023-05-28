#ifndef __POINT_H__
#define __POINT_H__

class Point
{
public:
    void setPointPos(int xpos, int ypos);
    void showPointPos();
    int pointComp(Point const& pos);

private:
    int xpos;
    int ypos;
    // int getXpos() const;
    // int getYpos() const;
};

#endif  // __POINT_H__