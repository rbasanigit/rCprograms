#include<stdio.h>
int main() 
{
    double a, b;
    printf("enter first double number:");
    scanf("%lf", &a);
    printf("enter second double number:");
    scanf("%lf", &b);
    printf("Quotient: %.3f", a/b);
    return 0 ;
}