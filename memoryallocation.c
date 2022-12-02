#include<stdio.h>
#include<stdlib.h>


int main()
{
    int Arr[5];    //Static Memory Allocation
    
    int *p = NULL ;   // Null Pointer 

    p = (int *)malloc(sizeof(int))*5 ;

    // Use The Memory 

    free(p);

    //code 


    return 0; // Memory of Arr gets deallocated at this point 
}