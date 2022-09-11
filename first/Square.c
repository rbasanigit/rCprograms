#include <stdio.h>
#include <ctype.h>
/*
int main() {
   int l,b;
   printf("enter length : ");
   scanf("%d",&l);

   printf("enter breadth : ");
   scanf("%d", &b);
   
   int p= l + b ;
   printf("Perimeter of rectangle = %d", 2 *( p ) );
   return 0;
}

int main() {
   int a;
   printf("Enter a number : ");
   scanf("%d", &a);
   printf("Cube of the number = %d", a * a * a );
   return 0;
}

int main() {
   int a,b,c;
   a=2, b=4, c=6 ;
   printf("%d", a+b+c/3);
   return 0;
}

///////////##########   isdigit ////////////////////////////////
int main() {
   char ch;
   printf("enter a number : ");
   scanf("%c", &ch);
  // printf("%d",x);
   //if (isdigit(ch))
   if(ch>='0' && ch<='9')
      printf("Given Character %c is Digit.", ch);
   else
      printf("Given Character %c is Not Digit.", ch);
  // printf("%d", x==0 || x==1);

   return 0;
}

 // Use the isdigit() function to check the character is digit or not. 
  
 //////////////////////// smallest number  ////////////////////////////////////   
 int main()  {
   int a,b;
   printf("enter first number : ");
   scanf("%d", &a);

   printf("enter second number : ");
   scanf("%d", &b);
   printf("smallest number = %d ", a>b ? b:a);
   return 0;
 }
*/
 int main() {
     char ch;
     printf("enter character : ");
     scanf("%c", &ch);

     if (ch>='A' && ch<='Z') {
      printf("upper case");
     }
     else if (ch>='a' && ch<='z') {
      printf("lower case");
     }
     else {
      printf("!!! enter valid character !!!");
     }
   return 0;
 }