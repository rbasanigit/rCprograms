#include <stdio.h>
#include<stdlib.h>
int main() {
   int n, i, *p;
   printf("enter total no of values");
   scanf("%d", &n);
   p = (int *)malloc(n*sizeof(int));
   if(p == NULL)
   {
       printf("memory not allocated");
   }
   printf("enter values");
   for(i = 0; i < n; i++)
   {
       scanf("%d",(p + i));
   }
   printf("enter the values are:   ");
   for(i = 0; i < n; i++)
   {
       printf("%d\t", *(p + i));
   }

    free(p);
}
