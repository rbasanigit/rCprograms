#include <stdio.h>
void fun();
int x = 5;
int y = 1;
int main()
{
    fun();
    {
        int x = 10;
        int y = 7;
        printf("block 1: %d\n", x + y);
    }
    {
    printf("block 2: %d\n", x + y);
    }
    printf("main: %d\n", x + y);
    return 0;
}
void fun()
{
    int x = 25;
    int y = 10;
    printf("function:%d\n", x + y);
}