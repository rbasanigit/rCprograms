#include<stdio.h>
int main()
{
    int arr[5] = {100, 120, 330, 406, 650};
    int *p;
    p = arr;
    printf("Initial array values:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, p[i]);
    }
    p[1] = 125;
    p[3] = 396;
    printf("Modified array values:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, p[i]);
    }
    return 0;
}