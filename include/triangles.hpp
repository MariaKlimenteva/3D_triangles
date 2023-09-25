#pragma once
//--------------------------------------------------------------------------
#include <iostream>
#include <cmath>
//--------------------------------------------------------------------------
template<typename T>
class Point // (x, y, z)
{
    private:
    T x_ = NAN;
    T y_ = NAN;
    T z_ = NAN; 

    public:
    Point(T x, T y, T z) : x_(x), y_(y), z_(z){}

    bool point_is_valid()
    {
        if((x_ != NAN) && (y_ != NAN) && (z_ != NAN))
        {
            return true;
        }
        return false;
    }

    T getX()
    {
        return x_;
    }

    T getY()
    {
        return y_;
    }

    T getZ()
    {
        return z_;
    }
};
//--------------------------------------------------------------------------
template<typename T>
class Line // (x - x1)/l = (y - y1)/m = (z - z1)/n
{
    private:
    T x_direction;
    T y_direction;
    T z_direction;


    public:
    Line(Point<T> &p1, Point<T> &p2)
    {
        x_direction = p2.getX() - p1.getX(); 
        y_direction = p2.getY() - p1.getY();
        z_direction = p2.getZ() - p1.getZ();
    }
};
//--------------------------------------------------------------------------