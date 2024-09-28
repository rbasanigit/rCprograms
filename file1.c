#include <stdio.h>
int main() 
{
    FILE *file;
    char ch;
    file = fopen("filec.txt", "w");
    if (file == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter characters (press Enter to stop):\n");
    while ((ch = getc(stdin)) != '\n') 
    {
        putc(ch, file);
    }
    fclose(file);
    printf("Characters written to filec.txt\n");
    return 0;
}