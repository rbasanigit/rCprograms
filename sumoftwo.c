#include<stdio.h>
int add(int a, int b); //declare
int main()
{
    int a, b;
    printf("enter value of a:");
    scanf("%d", &a);
    printf("enter value of b:");
    scanf("%d", &b);
    add(a, b);  //call
    return 0;
}
int add(int a, int b) // definition
{
    int sum = a + b;
    printf("sum : %d\n", sum);
}