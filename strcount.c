#include<stdio.h>
#include<string.h>
int main()
{
    char name[5][50];
    char c;
    int count = 0;
    for(int i = 0; i < 5; i++)
    {
        printf("Enter name %d:", i + 1);
        scanf("%s", name[i]);
    }
    printf("Enter the character to search for:");
    scanf(" %c", &c);
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < strlen(name[i]); j++)
        {
            if (name[i][j] == c)
            {
                count++;
            }
        }
    }
    printf("The character '%c' appears %d times.\n", c, count);
    return 0;
}