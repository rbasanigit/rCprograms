#include <stdio.h>
#define PI 3.1415     
#define DEBUG          
int main() {
    float radius = 3.5;
    float area = PI * radius * radius;  
#ifdef DEBUG  
    printf("Debug Mode: Calculating the area of a circle.\n");
    printf("Radius: %.2f\n", radius);
    printf("Area: %.2f\n", area);
#endif
#undef DEBUG  
#ifdef DEBUG  
    printf("This will not print because DEBUG is undefined now.\n");
#endif
#ifndef DEBUG  
    printf("Program is running in non-debug mode.\n");
#endif
    return 0;
}