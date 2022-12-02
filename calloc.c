#include<stdio.h>

int main()
{
    int *p = NULL;
    int size = 0;

    printf("Enter the Size/n");
    scanf("%d", &size);

    p = (int *)malloc(sizeof(int)*size); // void *malloc(4 * 5)
    p = (int *)calloc(sizeof(int),size);//void *calloc(4 , 5 )

    
    return 0 ;
}
//Prototype
//malloc prototype 
//void * malloc(int size)
//void *calloc(int size, int elements);
