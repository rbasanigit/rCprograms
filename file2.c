#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file = fopen("filec.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Contents of filec.txt:\n");
    while ((ch = getc(file)) != EOF)
        putchar(ch);
    fclose(file);
    return 0;
}