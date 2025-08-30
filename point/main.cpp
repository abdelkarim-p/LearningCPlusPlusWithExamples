//#include "point\point.hpp"
#include <cstdio> 
#include "point.hpp"
#include "unit_test.hpp"
using namespace std;


uint8_t * x = new uint8_t[100];

int just_to_exit_later(int x , int y)
{
    point * p1 = new point();

    /*p1->setX(99);
    p1->setY(49);
    printf("El friend function deh %d00%% \n", testing_point(*p1, 99, 49));*/
    //testing_point_class testing_point_object(*p1);
    //printf("El friend class deh %d00%% \n", testing_point_object.testing_point_class_function(99,49));
    //printf("El friend class using reference deh %d00%% \n", testing_point_object.testing_point_class_function_using_reference(99,49));

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
    //delete p4;
    
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

    struct x
    {
        uint8_t y;
        uint8_t *z;
    };
    x *b = new x[100];
    b[0].z = new uint8_t[100];
    delete[] b;

    struct Node
    {
        int *data;
    };
    Node *n = new Node;
    n->data = new int[10];
    //delete n; // but forgot delete[] n->data;

    //just_to_exit_later(5,4.0);
    //just_to_exit_later(5,4.0f);    
    //just_to_exit_later(5);


    just_to_exit_later(5,4);

    
    
    return 0;
}