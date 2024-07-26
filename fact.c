#include<stdio.h>
int trailingZeroes(int n);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = trailingZeroes(n); 
    printf("Number of trailing zeroes in %d! = %d\n", n, result); 

    return 0;
}
int trailingZeroes(int n)
{
    int count = 0;
    while(n >= 5)
    {
        n /= 5;
        count += n;
    }
    return count; 
}

