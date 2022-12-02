#include<stdio.h>

int main()
{
    int NO1 = 10;
    int No2 = 20;
    int No3 = 30;

    int *p = NULL;

    p = &NO1;
    printf("%d\n",*p);

    p = &No2;
    printf("%d\n",*p);
     

    return 0;

}