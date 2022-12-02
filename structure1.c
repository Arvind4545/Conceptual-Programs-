#include<stdio.h>

//structure Declaration
//There is no memory allocation at this point 
struct Demo 
{

    int i;        //4        //variable Declaration
    float f;      //4
    int j;        //4
    double d;     //8

};

int main()
{   
    //structure object / variable creation
    //Memory gets allocated at this point 
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    obj1.d = 11.0;
    obj2.i = 21;
    obj3.j = 51 ;

    printf("Size of obj1 is: %d \n",sizeof(obj1));
    printf("Size of obj2 is: %d \n",sizeof(obj2));
    printf("d of obj3 is: %d \n",obj3.j);

    return 0;
}