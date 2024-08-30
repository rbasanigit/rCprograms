#include <stdio.h>
#include <string.h>
int main() 
{
    char s[50] = "Welcome to GITAM"; 
    char s2[] = " Hello";
    int len = strlen(s);
    char copystr[50];
    strcpy(copystr, s);
    char *substr = strstr(s,"GITAM");
    strcat(s, s2);
    int cmp = strcmp(s, s2);
    printf("Original string: %s\n", copystr);
    printf("Length of string: %d\n", len);
    printf("Substring: %s\n", substr);
    printf("Concatenated string: %s\n", s);
    if(cmp == 0) 
    {
        printf("Strings are equal\n");
    }
    else if(cmp > 0) 
    {
        printf("First string is greater\n");
    }
    else 
    {
        printf("Second string is greater\n");
    }
    return 0;
}
