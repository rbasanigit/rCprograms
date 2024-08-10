#include<stdio.h>
static char ch;
void result();
int main()
{
    ch = 's';
    result();
    result();
    printf("char %c\n", ch);
    return 0;
}
void result()
{
    static int x;
    int y = 15;
    x = x + 5;
    y--;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
}