#include<stdio.h>
/*
//declaration
void printHello();
void printGoodbye();

int main() {
    printHello(); //function call
    printGoodbye();
    return 0;
}

//funtion definition
void printHello() {
    printf("Hello!");
}
void printGoodbye() {
    printf("Goodbye:)");
}
*/
void table(int n);
int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    table(n); //argument/actual parameter
    
    return 0;
}
void table(int n) { //parameter/formal parameter
    for(int i=1;i<=10;i++) {
        printf("%d\n", i * n);
    }
}