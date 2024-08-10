#include <stdio.h>
void fun();
int x = 5;
int y = 0;
int main()
{
    fun();
    {
        int x = 10;
        printf("block 1: %d\n", x);
    }
    {
    printf("block 2: %d\n", x);
    }
    printf("main: %d\n", x + y);
    return 0;
}
void fun()
{
    int x = 25;
    printf("function:%d\n", x);
}