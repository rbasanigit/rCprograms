#include<stdio.h>
int power(int x, int y)
{
    if(y == 0)
    {
        return 1;
    }
    else
    {
        return x * power(x, y - 1);
    }
}
int main()
{
    int a, b;
    printf("enter the number:");
    scanf("%d", &a);
    printf("enter the power:");
    scanf("%d", &b);
    int res = power(a, b);
    printf("power  = %d\n", res);
    return 0;
}