#include<stdio.h>
#include<string.h>
int main() {
    char arr[5][50];  
    char word[50];  
    int maxlen = 0;
    for(int i = 0; i < 5; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", arr[i]);  
        int length = strlen(arr[i]);
        if(length > maxlen) {
            maxlen = length;
            strcpy(word, arr[i]);  
        }
    }
    printf("Longest word: %s\n", word);
    return 0;
}
