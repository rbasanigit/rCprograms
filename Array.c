/////////////// ARRAYS ////////////
// Collection of similar data types stored at contiguous memory locations
#include<stdio.h>
// int main()
// {
//     int marks[3];
//     printf("enter maths marks:");
//     scanf("%d", &marks[0]);

//     printf("enter physics marks:");
//     scanf("%d", &marks[1]);

//     printf("enter chemistry marks:");
//     scanf("%d", &marks[2]);

//     printf("maths = %d, phy = %d, chem = %d\n", marks[0], marks[1], marks[2]);
// }

////////////// WAP TO ENTER PRICE OF 3 ITEMS AND PRINT THEIR FINAL COST WITH GST //////////////////
// int main()
// {
//     float price[3];
//     printf("enter the price of item 1:");
//     scanf("%f", &price[0]);

//     printf("enter the price of item 2:");
//     scanf("%f", &price[1]);

//     printf("enter the price of item 3:");
//     scanf("%f", &price[2]);

//     printf("total price of item 1 : %f\n", price[0]+(0.18 * price[0]));
//     printf("total price of item 2 : %f\n", price[1]+(0.18 * price[1]));
//     printf("total price of item 3 : %f\n", price[2]+(0.18 * price[2]));

//     return 0;
// }

/////////////// POINTER ARITHMETIC //////////////////////////
// int main()
// {
//     int age = 22;
//     int age2 = 35;
//     int *ptr = &age;
//     int *ptr2 = &age2;
//     // printf("ptr = %u\n", ptr);
//     // ptr++;
//     // printf("ptr = %u\n", ptr);
//     printf("difference is %u\n", ptr - ptr2);  //difference of the addresses
//     ptr2 = &age;
//     printf("comparison is %u\n", ptr == ptr2);  //returns 1 - true or 0 - false
// }

////////////// TRAVERSAL OF ARRAY ///////////////////
// int main()
// {
//     int aadhar[5];
//     int *ptr = &aadhar[0];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index : ", i);
//         scanf("%d", (ptr + i));  // or scanf("%d", &aadhar[i]);
//     }
//     printf("elements are :\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\t", *(ptr + i));  // or printf("%d\n", aadhar[i]);
//     }
//     return 0 ;
// }

///////////////// ARRAY AS FUNCTION ARGUMENT //////////////
// void printNums (int arr[], int n);  //in place of arr[], we can write *arr
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printNums(arr, 6);
//     return 0 ;
// }
// void printNums (int arr[], int n)  //in place of arr[], we can write *arr
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
// }

/////////////// MULTIDIMENSIONAL ARRAYS ////////////////
// int main()
// {
//     int marks[2][3];
//     marks[0][0] = 90;
//     marks[0][1] = 87;
//     marks[0][2] = 92;

//     marks[1][0] = 85;
//     marks[1][1] = 95;
//     marks[2][2] = 82;

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d\n", marks[i][j]);
//         }
//     }
// }

/////////// WRITE A FUNCTION TO COUNT THE NUMBERS OF ODD NUMBERS IN ARRAY //////////////
// int countOdd(int arr[], int n);
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     printf("odd numbers in an array are : %d\n", countOdd(arr, 10));
//     return 0 ;
// }
// int countOdd(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] % 2 != 0)
//         {
//             count++;
//         }
//     }
//     return count;
// }

/////////////// PRACTICE QUESTION //////////////
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     printf("%d\n", *(arr + 2));
//     printf("%d\n", *(arr + 5));
//     return 0 ;
// }

////////// WRITE A FUNCTION TO REVERSE AN ARRAY ///////////
// void revArr(int arr[], int n);
// int printArr(int arr[], int n);
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     revArr(arr, 5);
//     printArr(arr, 5);
//     return 0 ;
// }
// int printArr(int arr[], int n)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     printf("\n");
// }
// void revArr(int arr[], int n)
// {
//     for (int i = 0; i < n / 2; i++)
//     {
//         int firstVal = arr[i];
//         int secondVal = arr[n - i - 1];
//         arr[i] = secondVal;
//         arr[n - i - 1] = firstVal;
//     }
// }

//////////// WAP TO STORE THE FIRST N FIBONACCI NUMBERS //////////////
int main()
{
    int n;
    printf("enter n (n>2): ");
    scanf("%d", &n);
    
    if (n <= 2) {
        printf("n should be greater than 2.\n");
        return 1;  
    }
    
    int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];  // important syntax
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", fibo[i]);
    }
    
    return 0;
}
