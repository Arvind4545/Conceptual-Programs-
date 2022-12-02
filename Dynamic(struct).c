#include<stdio.h>
#include<stdlib.h>

struct Demo
{
    int iNum  ;
    float fValue;

};



int main()
{

    printf("%d",sizeof(struct Demo));
    struct Demo *ptr= NULL ;
    ptr = (struct Demo *)malloc(sizeof(struct Demo) *4 );

    printf("Size of Object : %d \n",sizeof(ptr));
    

    free(ptr);

    return 0;

}