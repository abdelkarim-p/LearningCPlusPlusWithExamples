#ifndef UNIT_TEST_HPP

#define UNIT_TEST_HPP

#include "point.hpp"

bool testing_point(point&  p, uint8_t x, uint8_t y);

class testing_point_class
{
private:
    point* to_be_tested; 
    //point & to_be_tested_reference = *to_be_tested;

public:
    testing_point_class(point&);

    bool testing_point_class_function(uint8_t x, uint8_t y);
    //bool testing_point_class_function_using_reference(uint8_t x, uint8_t y);
};
#endif