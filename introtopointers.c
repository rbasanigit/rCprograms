#include <stdio.h>
int main()
{
    int a = 1001, b = 19, c;
    int *p, *q;
    p = &a;
    q = &b;
    c = *q;
    printf("value of p = %p\n", p);
    printf("value of a = %d\n", a);
    printf("address of a = %p\n", &a);
    printf("address of q = %p\n", q);
    printf("value of *p = %d\n", *p);
    printf("value of q = %p\n", q);
    printf("c = %d\n", c);
    return 0;
}