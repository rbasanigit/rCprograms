#include<stdio.h>
int main()
{
    int arr[5] = {10, 22, 43, 4, 35};
    int *p;
    p = arr;
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    while (start < end)
    {
        int temp = p[start];
        p[start] = p[end];
        p[end] = temp;
        start++;
        end--;
    }
    printf("Reversed array:\n");
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) 
    {
        printf("arr[%d] = %d\n", i, p[i]);
    }
    return 0;
}