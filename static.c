#include<stdio.h>

void Demo()
{
    auto int A= 10;
    A++;
    printf("Value of A is %d\n",A);

}
void Hello()
{
    static int B = 10;
    B++;
    printf("value of B is %d\n",B);

}
int main()
{
    Demo();
    Demo();

    Hello();
    Hello();
    Hello();
    return 0;
}
