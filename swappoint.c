#include<stdio.h>
int main()
{
    int a = 1001, b = 19;
    int temp;
    int *p, *q;
    p = &a;
    q = &b;
    printf("Before swapping:\n");
    printf("Value of a = %d\n", *p);
    printf("Value of b = %d\n", *q);
    temp = *p;
    *p = *q;
    *q = temp;
    printf("After swapping:\n");
    printf("Value of a = %d\n", *p);
    printf("Value of b = %d\n", *q);
    return 0;
}