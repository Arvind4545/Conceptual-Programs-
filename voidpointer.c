#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 12;
    float f = 9.09;
    double d = 89.9878;

    char *cp = &ch;
    int *ap = &i;
    float *fp = &f;
    double *dp = &d;

    printf("Value of ch:%c\n",ch);
    printf("Address of ch:%p\n",&ch);
    printf("Value inside cp:%p\n",cp);
    printf("Data refer by cp:%c\n",ch);
    printf("Size of Pointer: %d\n",sizeof(*cp));
    printf("Size of Pointer: %d\n",sizeof(cp));

    return 0;
}