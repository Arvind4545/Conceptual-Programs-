
#include<stdio.h>

int main()
{
    int *p = NULL ; 
    int *q = NULL ; 

    p = (int *)malloc(sizeof(int)*10) ; 

    q = p ; //q = 100 and p = 100 

    free(p) ; //Dangling Pointer are those pointer which holds the address of Deallocated Memory or which points to memory which does not Exist 

    return 0 ; 
}