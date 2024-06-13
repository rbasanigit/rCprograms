/////////// DYNAMIC MEMORY ALLOCATION (way to allocate memory to data structures during runtime) /////////////
////////// MALLOC() (memory alloc) (takes no.of bytes to be allocated & returns a pointer of type void) //////////
#include<stdio.h>
#include<stdlib.h>
// int main() {
//     int *ptr;
//     ptr = (int*) malloc(5 * sizeof(int));
//     ptr[0] = 10;
//     ptr[1] = 20;
//     ptr[2] = 30;
//     ptr[3] = 40;
//     ptr[4] = 50;
//     for(int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ptr[i]);
//     }
//     return 0 ;
// }

///////////// WAP TO ALLOCATE MEMORY TO STORE 5 PRICES /////////////////
// int main() {
//     float *ptr;
//     ptr = (float *) malloc(5 * sizeof(float));
//     ptr[0] = 45.3;
//     ptr[1] = 67.9;
//     ptr[2] = 80.0;
//     ptr[3] = 54.2;
//     ptr[4] = 23.1;
//     for(int i = 0; i < 5; i++)
//     {
//         printf("%f\n", ptr[i]);
//     }
//     return 0;
// }

/////////// CALLOC() (continuous alloc) (initializes with 0) //////////////////
// int main() {
//     int *ptr;
//     ptr = (int*) calloc(5, sizeof(int));  // we pass 2 parameters
//     for(int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ptr[i]);
//     }
//     return 0 ;
// }

////////////// WAP TO ALLOCATE MEMORY OF SIZE N WHERE N IS ENTERED BY THE USER //////////////
// int main() {
//     int *ptr;
//     int n;
//     printf("enter n:");
//     scanf("%d", &n);
//     ptr = (int*) calloc(n, sizeof(int));
//     for(int i = 0; i < n; i++)
//     {
//         printf("%d\n", ptr[i]);
//     }
//     return 0;
// }

////////////// FREE() (used to free memory allocated using malloc() and calloc()) //////////////
// int main() {
//     int *ptr;
//     int n;
//     printf("enter n:");
//     scanf("%d", &n);
//     ptr = (int*) calloc(n, sizeof(int));
//     for(int i = 0; i < n; i++)
//     {
//         printf("%d\n", ptr[i]);
//     }
//     free(ptr);
//     ptr = (int*) calloc(2, sizeof(int));
//     for(int i = 0; i < n; i++)
//     {
//         printf("%d\n", ptr[i]);
//     }
//     return 0;
// }

///////////// REALLOC() (increases & decreases memory using same pointer and size) ////////////
// int main() {
//     int *ptr;
//     ptr = (int*) calloc(5, sizeof(int));
//     printf("enter 5 numbers : ");
//     for(int i = 0; i < 5; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }
//     ptr = realloc(ptr, 8);
//     printf("enter 8 numbers : ");
//     for(int i = 0; i < 8; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }
//     for(int i = 0; i < 8; i++)
//     {
//         printf("number is %d is %d\n", i, ptr[i]);
//     }
// }

/////////////// CREATE AN ARRAY OF SIZE 5 (USING CALLOC) & ENTER ITS VALUES FROM THE USER ////////////////
// int main() {
//     int *ptr;
//     ptr = (int*) calloc(5, sizeof(int));
//     printf("enter 5 numbers : ");
//     for(int i = 0; i < 5; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }
//     for(int i = 0; i < 5; i++)
//     {
//         printf("numbers are : %d\n", ptr[i]);
//     }
//     return 0 ;
// }

///////////// ALLOCATE MEMORY TO STORE FIRST 5 ODD NUMBERS, THEN REALLOCATE IT TO STORE FIRST 6 EVEN NUMBERS //////////////////////
int main() {
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    for(int i = 0; i < 5; i++)
    {
        printf("odd numbers : %d\n", ptr[i]);
    }
    ptr = realloc(ptr, 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    for(int i = 0; i < 5; i++)
    {
        printf("even numbers : %d\n", ptr[i]);
    }
    return 0 ;
}