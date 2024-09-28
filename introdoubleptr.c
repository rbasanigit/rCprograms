#include<stdio.h>
int main() {
    int x = 10;
    int *p;      // Pointer to int
    int **q;    // Pointer to pointer

    p = &x;      // Pointer points to x
    q = &p;   // Pointer to pointer points to ptr

    // Printing value of x using pointer to pointer
    printf("Value of x: %d\n", x);
    printf("Value of x using single pointer: %d\n", *p);
    printf("Value of x using pointer to pointer: %d\n", **q);

    return 0;
}