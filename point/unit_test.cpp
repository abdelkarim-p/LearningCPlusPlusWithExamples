
#include "cstdint"
#include "unit_test.hpp"

bool testing_point(point & p, uint8_t x, uint8_t y)
{
    return (p.x == x && p.y == y);
}
testing_point_class::testing_point_class(point&  p)
{
    to_be_tested = &p; 
}
bool testing_point_class::testing_point_class_function(uint8_t x, uint8_t y)
{
    return (to_be_tested->x == x && to_be_tested->y == y);
}
/*bool testing_point_class::testing_point_class_function_using_reference(uint8_t x, uint8_t y)
{
    return (to_be_tested_reference.x == x && to_be_tested_reference.y == y);
}*/