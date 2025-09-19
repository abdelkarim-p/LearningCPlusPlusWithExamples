#include <cstdint>
#include <cassert>
#include <cstdio> 
#include <cmath>

#include "point.hpp"

// MACROS
// TO-DO: convert these into static const and static constexpr?!
#define DEFAULT_LIMIT_X 100
#define DEFAULT_LIMIT_Y 100
#define DEFAULT_X 100
#define DEFAULT_Y 100



/*point::point(const point &other)
{

    printf(" copy (point &) constructor called \n");
    x = other.x;
    y = other.y;

    LimitX = other.LimitX;
    LimitY = other.LimitY;
}

point::point()
{

    printf(" constructor called \n");
    x = DEFAULT_X;
    y = DEFAULT_Y;

    LimitX = DEFAULT_LIMIT_X;
    LimitY = DEFAULT_LIMIT_Y;
}*/
point& point::operator=(const point& other)
{
    printf(" = operator called with %d %d \n", other.getX(), other.getY());
    x = other.x;
    y = other.y; 
    
    return (point&)*this;
}
point::point(const uint8_t x_val, const uint8_t y_val)
{
    printf(" x,y constructor called \n")   ;

    x = x_val;
    y = y_val;

    LimitX = DEFAULT_LIMIT_X;
    LimitY = DEFAULT_LIMIT_Y;
}
/*
point::point(const uint8_t LimitX, const uint8_t LimitY, const uint8_t x_val, const uint8_t y_val)
{
    printf(" 1,2,x,y constructor called \n");
    assert(x_val < LimitX);
    assert(y_val < LimitY);

    x = x_val;
    y = y_val;

    this->LimitX = LimitX;
    this->LimitY = LimitY;
}*/

void point::setPoint(const uint8_t x_val, const uint8_t y_val)
{
    assert(x_val < LimitX);
    assert(y_val < LimitY);

    x = x_val;
    y = y_val;
}

uint32_t point::calcPointsDistance(const point &other_point, const bool isSameLimits)
{
    uint8_t X2 = other_point.x;
    uint8_t Y2 = other_point.y;

    if (isSameLimits == true)
    {
        assert(X2 < LimitX);
        assert(Y2 < LimitY);
    }

    uint8_t abs_diff_x = (x > X2) ? x - X2 : X2 - x;
    uint8_t abs_diff_y = (y > Y2) ? y - Y2 : Y2 - y;

    return (powI(abs_diff_x, 2) + powI(abs_diff_y, 2));
}

void point::setX(uint8_t x_val)
{
    assert(x_val < LimitX);

    x = x_val;
}

void point::setY(uint8_t y_val)
{
    assert(y_val < LimitY);

    y = y_val;
}

uint8_t point::getX() const
{
    return x;
}
uint8_t point::getY() const
{
    return y;
}

uint32_t powI(uint8_t x, uint8_t power)
{
    if (power == 0)
        return 1;

    uint32_t ret = x;
    power--;

    for (; power > 0; power--)
        ret = x * ret;

    return ret;
}

point point::operator+() const
{
    return *this;
}
point point::operator-() const
{
    point ret;

    ret.x = -x;
    ret.y = -y; 

    return ret;
}
point point::operator+(const point &other) const
{
    printf(" + operator called with %d %d \n", other.getX(), other.getY());
    point ret;

    ret.x = x + other.x;
    ret.y = y + other.y;

    return ret;
}
point point::operator-(const point &other) const
{

    printf(" - operator called with %d %d \n", other.getX(), other.getY());

    point ret;

    ret.x = x - other.x ;
    ret.y = y - other.y;

    return ret;
}
// or void ... but use reference to allow chaining
point& point::operator-=(const point &other) 
{

    printf(" -= operator called with %d %d \n", other.getX(), other.getY());

    
    *this = *this - other;
    // or x = x - other.x;  y = y - other.y;

    return *this;
}

bool point::operator==(const point&other)
{
    printf(" == operator called with %d %d \n", other.getX(), other.getY());
    return ((x==other.x) && (y == other.y));
}
point::operator int()
{
    return calcPointsDistance(point(0,0), true);
}
point::operator double()
{
    return (calcPointsDistance(point(0,0), true) + 0.5);
    
}

