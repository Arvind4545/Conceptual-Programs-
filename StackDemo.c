
#include<stdio.h>

int Addition(int No1 , int No2 )
{
    int iAns = 0; 

    printf("Inside Addition\n") ; 

    iAns = No1 + No2 ; 

    return iAns ; 
}

int main()
{
    int A = 11 ; 
    int B = 10 ; 
    int iRet = 0 ; 

    printf("Inside Main\n") ; 

    iRet = Addition(A , B ) ; 

    printf("Addition is : %d\n",iRet) ; 

    return 0 ; 
}