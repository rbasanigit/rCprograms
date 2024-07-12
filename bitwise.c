#include<stdio.h>
int main()
{
    unsigned char a = 5;
    unsigned char b = 9;
    printf("a & b : %u\n", a & b);
    printf("a | b : %u\n", a | b);
    printf("a ^ b : %u\n", a ^ b);
    printf("~a : %u\n", ~a);
    printf("a << 1 : %u\n", a << 1);
    printf("b << 1 : %u\n", b << 1);
    printf("a >> 1 : %u\n", a >> 1);
    printf("b >> 1 : %u\n", b >> 1);
    unsigned char c;
    c = (a & b) | (~a);
    printf("%u\n", c);
    (a > b) ? printf("\na is greater than b that is %d > %d", 
                     a, b) 
            : printf("\nb is greater than a that is %d > %d", 
                     b, a);
    return 0;
}

