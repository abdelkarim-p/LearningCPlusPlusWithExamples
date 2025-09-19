//#include "point\point.hpp"
#include <cstdio> 
#include "point.hpp"
#include "unit_test.hpp"
#include "single_variable.hpp"

using namespace std;

void another_function()
{
    point x1 {42,32}; // Default Constructor
    point x2 = x1;
    //point x2(1,2); // Defined Constructor
   // point y(x2); point z = x2; // Copy constructor 
    

    printf("x1: %d , %d \n", x1.getX(), x1.getY());
    printf("x2: %d , %d \n", x2.getX(), x2.getY());
    /*printf("y:  %d , %d \n", y.getX(), y.getY());
    printf("z:  %d , %d \n", z.getX(), z.getY());*/
}
int main() 
{
    another_function();

    printf("returned from another function \n");

    return 0;
}