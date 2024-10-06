#include <stdio.h>
#include <string.h>
#define CONCATSTR(str1, str2) str1 str2  
int main() 
{
    char String[] = CONCATSTR("Gitam ", "University Hyderabad");  
    printf("%s\n", String);  
    return 0;
}