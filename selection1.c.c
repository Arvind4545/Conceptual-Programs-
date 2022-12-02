#include<stdio.h>
#include<stdbool.h>

//% = mod operator 
// == = Equality operator 

bool CheckEven(int iNo)
{
    if((iNo % 2)== 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue1 = 0;
    bool bRet = false;

    printf("Enter First Number\n");
    scanf("&d",&ivalue1);

    bRet = CheckEven(ivalue1);

    if(bRet==true)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf("It is Odd Number");
    }


    return 0;
}