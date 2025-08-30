//#include "point\point.hpp"
#include <cstdio> 
#include "point.hpp"

using namespace std;


int just_to_exit_later(int x , int y)
{
    point * p1 = new point();
    point * p2 = new point(*p1); 
    point * p3 = new point(34, 25);
    point * p4 = new point(200,150,180,132);
    printf("1 \n");
    printf("%d %d \n", p1->getX() , p1->getY());
    printf("%d %d \n", p2->getX() , p2->getY());
    printf("%d %d \n", p3->getX() , p3->getY());
    printf("%d %d \n", p4->getX() , p4->getY());

    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
}
int just_to_exit_later(int x , double y)
{
    printf("2 \n");

    return 0;
}
int just_to_exit_later(int x , float y)
{
    printf("4 \n");

    return 0;
}
int just_to_exit_later(int z)
{
    printf("3 \n");

    // TODO: Can return type be used to tell apart overloaded functions?
    return 0;
}

int main() {


    just_to_exit_later(5,4.0);
    just_to_exit_later(5,4.0f);
    just_to_exit_later(5,4);
    just_to_exit_later(5);

    printf("d7k \n");
    
    return 0;
}