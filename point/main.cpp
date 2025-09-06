//#include "point\point.hpp"
#include <cstdio> 
#include "point.hpp"
#include "unit_test.hpp"
using namespace std;

int main() 
{
    /* point x(4, 5);
    point y(8, 7);
    point z(12,14);
    z = x - y + x;
    printf(" %d %d \n", z.getX(), z.getY())   ;
    z = x - (y + (x - y)) + x;
    printf(" %d %d \n", z.getX(), z.getY())   ;
    z = -x + y;
    printf(" %d %d", z.getX(), z.getY())   ;
    z = +x - y + x;
    printf(" %d %d \n", z.getX(), z.getY())   ;
    z -= x + y;
    printf(" %d %d\n ", z.getX(), z.getY())   ;

    point m(1,2);
    point s(8,7);
    point d (9,9);
    printf("%d %d %d %d\n", m==s, s == d, d == m+s, d-s == m-s+s); */

    point x(3,4);
    // double y1 = x; Gives Error!!
    double y2 = (double)x;
    printf("%d  %f", int(x), y2);

    return 0;
}