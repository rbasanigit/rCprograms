#include<stdio.h>
/*
int main() {
    //iterator / counter variable (i)
    for (int i=10; i>=1; i=i-1) {
        printf("%d \n", i);
    }
    return 0;
}
int main() {
      //increment operator (++i and i++)
      // ++i (pre increment operator)
      //i++ (post increment operator)

      //decrement operator (--i and i--)
      //--i (pre decrement)
      //i-- (post decrement)

    int i=1;
    printf("%d \n", i--);  //use, then increase
    printf("%d \n", i);

    printf("%d \n", --i);  //increase, then use
    printf("%d \n", i);
    return 0;
}
//@@@@@@@@@@@@@@@@@@@@ While Loop @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int main() {
    int i=1;
    while (i<=5) {
        printf("%d\n", i);
        i=i+1;
    }
    return 0;
}
int main() {
    int n;
    printf("enter a number : ");
    scanf("%d", &n);

     int i=0;            //initialization
     while(i<=n) {       //condition
        printf("%d \n", i);
        i=i+1;           //updation
     }

    // for (int i=0; i<=n; i=i+1) {
    //     printf("%d \n", i);
    // }
    return 0;
}
//$$$$$$$$$$$$$$$$$$$$$$$$ Do While Loop $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
int main() {
    int i=1;
    do {
        printf("%d", i);
        i++;
    } while (i<=5);
    return 0;
}
int main() {
    int n;
    printf("enter an number :");
    scanf("%d", &n);

    int sum=0;
    for(int i=1,j=n; i<=n && j>=1; i++, j--) {
        sum =sum+i;
        printf("%d \n", j);
    }
    printf("sum is %d",sum);

    return 0;
}
//############## Table of a number ####################
int main() {
    int n;
    printf("enter a number : ");
    scanf("%d", &n);

    for (int i=1; i<=10; i++) {
        printf("%d \n", n*i);
    }
    return 0;
}
//****************** Break Statement *****************************
int main() {
    int n;
    do {
        printf("enter a number : ");
        scanf("%d", &n);
        printf("%d \n", n);
        
        if(n % 7 == 0) { //n is multiple of 7
            break;
        }
    } while(1);
    printf("end");
    return 0;
}
//%%%%%%%%%%%%%%%%%%%% Continue Statement %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
int main() {
    for (int i=1; i<=5; i++) {
        if (i==3) {
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}
//############# Factorial of a Number ####################################
int main() {
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    int fact=1;
    for (int i=1; i<=n; i++) {
        fact=fact*i;   
    }
    printf("factorial is %d ",fact);
    return 0;
}
*/
int main() {
    int sum=0;
    for (int i=5; i<=50; i++) {
        sum = sum +i;
    }
    printf("sum is %d ", sum);
    return 0;
}


