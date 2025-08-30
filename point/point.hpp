#include <cstdint>

class point
{


private: 

    // TO-DO: Change this to int

    uint8_t x;
    uint8_t y;
    uint8_t LimitX;
    uint8_t LimitY;
    uint32_t powI(uint8_t x, uint8_t power);

public:

    point();

    point(const uint8_t x_val, const uint8_t y_val);

    point(const uint8_t LimitX, const uint8_t LimitY, const uint8_t x_val, const uint8_t y_val);

    void setPoint(const uint8_t x_val, const uint8_t y_val);

    uint32_t calcPointsDistance(const point  &other_point, const bool isSameLimits);

    void setX(uint8_t x_val);

    void setY(uint8_t y_val);

    uint8_t getX();

    uint8_t getY();

    point operator+(const point& other) const;

    point operator-(const point& other) const;
    
};