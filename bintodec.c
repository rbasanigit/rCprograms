#include<stdio.h>
int binaryToDecimal(int x)
{
    int dec, base = 1, rem;
    dec = 0;

    while (x > 0)
    {
        rem = x % 10;
        dec = dec + rem * base;
        x = x / 10;
        base = base * 2;
    }

    return dec;
}
int main()
{
    int a;
    printf("Enter a binary number: ");
    scanf("%d", &a);
    printf("%d in binary = %d in decimal\n", a, binaryToDecimal(a));
    return 0;
}
