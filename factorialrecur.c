#include<stdio.h>
int factor(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factor(x - 1);
    }
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("%d\n", factor(a));
    return 0;
}