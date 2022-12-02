#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11 ;
    float f = 3.14;
    double d = 9.567;
    printf("Values from variables are:\n");
    printf("%c\n",ch);
    printf("%d\n",i);
    printf("%f\n",f);
    printf("%lf\n",d);

    printf("size of each Variable is\n");
    printf("size of character is:%d\n",sizeof(ch));
    printf("size of integer is:%d\n",sizeof(i));
    printf("size of float is:%d\n",sizeof(f));
    printf("size of double is:%d\n",sizeof(d));

    printf("address of each variable is\n");
    printf("address of character is:%p\n",&ch);
    printf("address of Integer is:%p\n",&i);
    printf("address of float is:%p\n",&f);
    printf("address of double is:%p\n",&d);


    return 0 ;

}
