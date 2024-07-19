#include<stdio.h>
int main()
{
    int c = 15;
    int d = 2;
    int ans = c / d;
    if (c % d == 0)
    {
        goto print;
    }
    ans += 1;
    print:
        printf("%d\n", ans);
    return 0;
}