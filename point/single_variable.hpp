
#include "cstdint"

class single_for_ever
{
    uint8_t var;
public:
    uint8_t get_var();
    single_for_ever(uint8_t var) : var(var){};
};