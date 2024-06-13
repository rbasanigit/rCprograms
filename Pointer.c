////////////// POINTERS ///////////////
// POINTER : a variable that stores the memory address of another variable
// SYNTAX : int *ptr = &age  (* - value at addr, & - address of), (* - returns value, & - returns addr)
#include<stdio.h>
// int main() {
//     int age = 25;
//     int *ptr = &age;  // declaring the pointer
//     //printf("%p\n", &age);  // returns the address
//     //printf("%u\n", ptr);
//     //printf("%d\n", *ptr);  // returns the value of the addr stored 
//     printf("%d\n", *(&age));  // returns the value
//     return 0 ;
// }

/////////////// PRACTICE QUESTION ///////////////////
// int main()
// {
//     int *ptr;
//     int x;
//     ptr = &x;
//     *ptr = 0;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     *ptr += 5;
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     (*ptr)++;
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     return 0;
// }

////////////// POINTER TO POINTER (variable that stores memory addr of another pointer) ////////////////
// int main()
// {
//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &ptr;  //declaration of pointer to pointer
//     printf("%d\n", **pptr);
//     return 0 ;
// }

/////////////// CALL BY VALUE (pass value of variable as argument) //////////////////
// void square(int n);
// int main()
// {
//     int num = 10;
//     square(num);
//     printf("number is = %d\n", num);
//     return 0 ;
// }
// void square(int n)  // call by value 
// {
//     n = n * n;
//     printf("square is = %d\n", n);
// }

///////////////// CALL BY REFERENCE (pass address of variable as argument) ///////////////
// void _squa(int* n);
// int main()
// {
//     int num = 5;
//     _squa(&num);
//     printf("number is = %d\n", num);
//     return 0 ;
// }
// void _squa(int* n)  // call by reference
// {
//     *n = (*n) * (*n);
//     printf("square = %d\n", *n);
// }

/////////////// SWAP TWO NUMBERS USING POINTERS ////////////////
// void _swap(int *a, int *b);
// int main()
// {
//     int x = 4, y = 8;
//     _swap(&x, &y);
//     printf("x = %d and y = %d\n", x, y);
//     return 0;
// }
// void _swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

/////////////// PRINT THE ADDRESS ////////////////////
// void printAddr(int n);
// int main()
// {
//     int n = 4;
//     printf("%p\n", &n);
//     printAddr(n);
//     return 0;
// }
// void printAddr(int n)
// {
//     printf("%p\n", &n);
// }

////////////// WRITE A FUNCTION TO CALCULATE SUM, AVG, PRODUCT OF 2 NO.S AND PRINT THE AVERAGE IN MAIN FUNCTION /////////////////////
// void oper(int a, int b, int *sum, int *pro, int *avg);
// int main()
// {
//     int a = 5, b = 3;
//     int sum, pro, avg;
//     oper(a, b, &sum, &pro, &avg);
//     printf("sum = %d\n", sum);
//     printf("product = %d\n", pro);
//     printf("average = %d\n", avg);
//     return 0 ;
// }
// void oper(int a, int b, int *sum, int *pro, int *avg)
// {
//     *sum = a + b;
//     *pro = a * b;
//     *avg = (a + b) / 2;
// }

///////////// MAXIMUM OF TWO NO.S USING A POINTER ////////////
int main()
{
    int a, b;
    int *ptr1, *ptr2;

    ptr1 = &a;
    *ptr1 = 9;

    ptr2 = &b;
    *ptr2 = 15;
    
    if (*ptr1 > *ptr2)
    {
        printf("maximum is %d\n", a);
    }
    else
    {
        printf("maximum is %d\n", b);
    }


}