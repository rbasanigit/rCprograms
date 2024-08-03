#include <stdio.h>
int main() {
   int a = 0, b = 1, c = 2, d;
   d = (++a) || ((b++ && c++) && a++);
   printf("%d %d %d %d\n", a, b, c, d);
   return 0;
}
