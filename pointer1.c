#include<stdio.h>

int main()
{
    long int No = 11; 
    int *p = &No;

    printf("%d\n",No);
    printf("%d\n",&No);
    printf("%d\n",sizeof(No));
    printf("%p\n",sizeof(p));
    printf("%d\n",p);
    printf("%p\n",&p);


    return 0;
}