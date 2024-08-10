#include<stdio.h>
int binary(int x)
{
    int bin;
    if (x == 0)
    {
        return bin = 0;
    }
    else
    {
        return bin = x % 2 + 10 * (binary(x / 2));
    }
}
int main()
{
    int a;
    printf("Enter a decimal number:");
    scanf("%d", &a);
    printf("%d\n", binary(a));
    return 0;
}