#include<stdio.h>
#include<string.h>
int main()
{
    char pwd[] = "@abc##123";
    char pass[20];
    int comp;
    do
    {
        printf("Enter the password:");
        scanf("%s", pass);
        comp = strcmp(pass, pwd);
        if (comp == 0)
        {
            printf("Access granted!\n");
        }
    }while(comp != 0);

    return 0;
}