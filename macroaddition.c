#include <stdio.h>
#define ADD(x, y) ((x) + (y))  
int main() {
    int a = 150, b = 134;
    printf("The sum of %d and %d is: %d\n", a, b, ADD(a, b));  
    return 0;
}