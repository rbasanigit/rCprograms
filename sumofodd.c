#include<stdio.h>
int main()
{
    int num;
    int sum = 0;
    while(1)
    {
        printf("enter a number:");
        scanf("%d", &num);
        if(num % 2 == 0 && num > 0)
        {
            printf("even number skipped\n");
            continue;
        }
        if(num % 2 != 0)
        {
            sum += num;
        }
        if(num < 0)
        {
            break;
        }
    }
    printf("sum of odd numbers: %d\n", sum);
    return 0;
}