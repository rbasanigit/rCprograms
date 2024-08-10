#include<stdio.h>
int main()
{
    auto int y = 10;
    {
        auto int y;
        printf("%d\n", y);
    }
    printf("%d\n", y);
    return 0;
}