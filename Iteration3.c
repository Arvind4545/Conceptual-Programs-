#include<stdio.h>

int main()
{
    int Arr[4] = {21, 31 ,41 , 51 };

    printf("Elements of Array are : \n");

    int iCnt = 0;

    for (iCnt = 0 ; iCnt <= 3 ; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
    return 0;
}