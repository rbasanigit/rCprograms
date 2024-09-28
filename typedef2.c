#include <stdio.h>
int main()
{
    typedef int array[5];
    array x = {10, 20, 30, 40, 50};
    int i;
    printf("array elements are:");
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", x[i]);
    }
    return 0;
}