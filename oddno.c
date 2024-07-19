#include<stdio.h>
int main()
{
    for(int i = 1; i <= 50; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        if(i == 35)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}