#include<stdio.h>
extern void result1();
extern void result2();
int main()
{
    extern int a;
    printf("%d\n", a);
    result1();
    result2();
    return 0;
}
void result1()
{
    
    int a = 3;
    a++;
    printf("a=%d\n", a);
    
}
void result2()
{
    printf("hello\n");
}
int a = 10;