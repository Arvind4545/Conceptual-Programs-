#include<stdio.h>

int Function(int iValue1 ,int iValue2)
{
    int ians = 0 ;
    ians = iValue1 + iValue2 ;
    return ians ;  
}

int main()
{
    int iNo1 = 14 ;
    int iNo2 = 15 ;
    int iAddition = 0;

    iAddition =Function(iNo1 ,iNo2);
    printf("Addtion of two Numbers is :%d\n", iAddition);
    return 0;
}