#include<stdio.h>
struct values
{
    unsigned int x : 2;
    unsigned int y : 3;
};
int main()
{
    struct values n;
    n.x = 3;
    n.y = 7;
    printf("value1 = %d\n", n.x);
    printf("value2 = %d\n", n.y);
    return 0;
}