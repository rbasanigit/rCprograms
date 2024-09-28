#include <stdio.h>
#include<stdlib.h>// Required for malloc and free
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
   printf("\nupdated size of n:");
   scanf("%d", &n);
   int *p1 = (int*)realloc(p, n*sizeof(int));
   printf("\n old address:%d,new address :%d", p, p1);
   printf("\nenter values are");
   for(i = 0; i < n; i++)
   {
       printf("%d\t", *(p1 + i));
   }

    free(p1);
}