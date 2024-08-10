#include <stdio.h>
void Example() {
    register int c; 
    for (c = 0; c < 10; c++) {
        printf("Counter: %d\n", c);
    }
}
int main() {
    Example();
    return 0;
}