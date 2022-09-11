# include<stdio.h>
#include<math.h>
/*
int main() {
   float r;
   printf("enter radius : ");
   scanf("%f",&r);
   
   printf("Area of Circle = %f", 3.14 * r * r);
   return 0;
}
 
int main() {
  int x;
  printf("enter a number : ");
  scanf("%d", &x);
  printf("%d", x % 2 == 0);
   return 0;
}

int main() {
  int x;
  printf("enter a number : ");
  scanf("%d", &x);
  printf("%d", x>9 && x<100);
   return 0;
}

$$$$$$$$$$$$$$$$$$$$$$$$ Ternary Operator $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
int main() {
   int age;
   printf("enter age : ");
   scanf("%d", &age);

   age>=18 ? printf("Adult") : printf("Not Adult");
   return 0;
}

@@@@@@@@@@@@@@@@@@@@@@@ Switch Operator @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int main() {
   int day; //1-mon,2-tue,3-wed,4-thur,5-fri,6-sat,7-sun
   printf("enter day(1-7) : ");
   scanf("%d", &day);

   switch (day) {
      case 1: printf("Monday");
              break;
      case 2: printf("Tuesday");
              break;
      case 3: printf("Wednesday");
              break;
      case 4: printf("Thursday");
              break;
      case 5: printf("Friday");
              break;
      case 6: printf("Saturday");
              break;
      case 7: printf("Sunday");
              break; 
      default : printf("Not A Valid Day !!!!");                                               
  }
   return 0;
}

int main() {
   int marks;
   printf("enter marks : ");
   scanf("%d", &marks);

   // if (marks > 30 && marks <=100) {
   //    printf("PASS");
   // }
   // else if (marks >= 0 && marks <=30) {
   //    printf("FAIL");
   // }
   // else {
   //    printf("enter valid marks !!!!");
   // }
// # Ternary Operator
   marks <=30 ? printf("fail") : printf("pass");
   return 0;
}
*/
int main() {
    int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;  
printf("remainder is : %d \n",r);  
sum=sum+(r*r*r);    
n=n/10; 
printf("n is :%d \n", n);   
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number"); 
   return 0;
}

