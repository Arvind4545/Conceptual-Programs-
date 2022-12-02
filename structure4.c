#include<stdio.h.>
struct Demo
{
    int i ;
    char ch;
    float f;
    double d;
    

};

int main()
{
    struct Demo obj;

    printf("size of the structure is : %d\n",sizeof(obj));
    return 0;
    
}