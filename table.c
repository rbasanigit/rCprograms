#include<stdio.h>
int main()
{
    int num, range;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Enter the range:");
    scanf("%d", &range);
    printf("Multiplication table for %d up to %d:\n", num, range);
    for(int i = 1; i <= range; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}