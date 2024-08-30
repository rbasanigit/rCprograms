#include<stdio.h>
int main()
{
    int arr[5] = {15, 110, 215, 320, 525};
    int *p;
    int sum = 0;
    p = arr;
    for(int i = 0; i < 5; i++)
    {
        sum += *(p + i);
    }
    printf("Sum of array elements = %d\n", sum);
    return 0;
}