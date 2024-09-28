#include <stdio.h>
int main()
{
    FILE *file;
    char ch;
    int count = 0;
    file = fopen("filec.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Contents of filec.txt:\n");
    while ((ch = getc(file)) != EOF)
    {
        putchar(ch);
        count++;
    }
    fclose(file);
    printf("\nTotal number of characters: %d\n", count);
    return 0;
}