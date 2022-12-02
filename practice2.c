#include<stdio.h>

int S = 46;

void demo()
{
    int iAns = 67;
    printf("value of iAns: %d\n",iAns);
    //printf("value of iNo: %d\n",iNo);
    printf("value of global variable: %d\n",S);
    
}

int main()
{
    int iNo = 45;

    demo();

    printf("value of iNo is, %d",iNo);
    printf("value of global variable: %d\n",S);
    return 0;
}
