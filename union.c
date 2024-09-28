#include<stdio.h>
union abc 
{
    int a;
    char b;
    float c;
};
int main() 
{
    union abc u;
    u.a = 1;
    printf("a = %d\n", u.a);
    u.b = 97;
    printf("b = %c\n", u.b);
    u.c = 4.5;
    printf("c = %.2f\n", u.c);
    return 0;
}
