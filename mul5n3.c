#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz\t");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\t");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\t");
        }
        else
        {
            printf("%d\t", i);
        }
    }
    return 0;
}