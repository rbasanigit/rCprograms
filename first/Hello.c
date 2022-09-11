# include<stdio.h>
/* Area of Rectangle
int main() {
   int s1, s2;
   printf("enter first side : ");
   scanf("%d",&s1);
   
   printf("enter second side : ");
   scanf("%d", &s2);
  

   int area = s1 * s2;
   printf("Area of rectangle = %d", area);
   return 0;
}


int main() {
   int s;
   printf("enter a side : ");
   scanf("%d",&s);
   
   printf("Area of square = %d", s*s);
   return 0;
}

//////////////////////////// If-Else Condition ///////////////////////////////////////
int main() {
   int age;
   printf("enter age : ");
   scanf("%d", &age);

   if(age>=18) {
      printf("Adult");
   }
   else {
      printf("Not Adult");
   }
    return 0;
} 
####################### Else If Condition ######################################
int main() {
   int age;
   printf("enter age : ");
   scanf("%d", &age);

   if(age>=18) {
      printf("Adult");
   }
   else if(age>13 && age<18) {
      printf("Teenager");
   }
   else {
      printf("Child");
   }
    return 0;
} 

///////////////////// Nested If-Else Condition //////////////////////////////////////////////
int main() {
   int n;
   printf("enter a number : ");
   scanf("%d", &n);

   if(n>=0) {
      printf("positive \n");
      if(n % 2==0) {
         printf("even \n");
      }
      else {
         printf("odd \n");
      }
   }
   else{
      printf("negative \n");
   }
   return 0;
}
*/