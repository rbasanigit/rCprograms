#include<stdio.h>
#include<string.h>
int main() {
    char str1[10]; 
    int count = 0;  
    printf("Enter a string: ");
    scanf("%s", str1);
    for(int i = 0; str1[i] != '\0'; i++) {
        char c = str1[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    printf("Number of vowels: %d\n", count);
    return 0;
}
