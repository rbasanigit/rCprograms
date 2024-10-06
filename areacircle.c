#include <stdio.h>
#define PI 3.1415     
#define AREA(r) (PI * (r) * (r))  
int main() {
    float radius = 7.5;
    float area = AREA(radius);  
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);
    return 0;
}