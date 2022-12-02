#include<stdio.h>

int Addition( int iNum ,int iNum2)
{
    int ioutput = 0;
    ioutput = iNum + iNum2;
    return ioutput;

}

int main()
{
    int iNo = 45;
    int iNo2 = 77;

    int iAns = Addition(iNo, iNo2);
    printf("Addition is:%d\n",iAns);
    return 0;

}