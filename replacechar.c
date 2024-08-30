#include<stdio.h>

int main()
{
    char str[100];
    char oldChar, newChar;
    char *p;
    int i = 0;
    printf("Enter a sentence: ");
    while ((str[i] = getchar()) != '\n' && i < 99) {
        i++;
    }
    str[i] = '\0';  
    printf("Enter the character to replace: ");
    scanf(" %c", &oldChar);
    printf("Enter the new character: ");
    scanf(" %c", &newChar);
    p = str;
    while (*p != '\0') 
    {
        if (*p == oldChar) 
        {
            *p = newChar;
        }
        p++;
    }
    printf("Modified string:\n%s\n", str);
    return 0;
}
