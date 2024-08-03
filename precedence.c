#include <stdio.h>
int main() {
    int a = 5, b = 3, c = 2, x = 5;
    printf("%d\n", a + b * c); 
    printf("%d\n", (a + b) * c); 
    printf("%d\n", a / b - c); 
    int temp1 = x++;
    int temp2 = ++x;
    printf("%d\n", temp1 + temp2);
    printf("%d\n", (a + b) * c + (b - a)); 
    return 0;
}
