#include<stdio.h>
int main()
{
    int arr[10], i;
    int sum = 0;
    printf("elements of array:");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("sum of the elements: %d\n", sum);
    return 0;
}