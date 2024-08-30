#include<stdio.h>
int main()
{
    int arr1[5] = {910, 420, 308, 409, 501};
    int arr2[5];
    int *p, *q;
    p = arr1;
    q = arr2;
    for(int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    printf("Original array:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, p[i]);
    }
    printf("Copied array:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, q[i]);
    }
    return 0;
}