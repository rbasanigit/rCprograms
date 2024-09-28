#include <stdio.h>
union Data
{
 int i;
 float f;
 char c;
};
int main() 
{
 union Data data;
 data.i = 82;
 printf("Integer: %d\n", data.i);
 data.f = 13.14;
 printf("Float: %.2f\n", data.f);
 data.c = 'S';
 printf("Character: %c\n", data.c);
 return 0;
}