#include<stdio.h>
#include<string.h>
int main() {
    char name[20];
    for (int i = 0; i < 4; i++) 
    {  
        printf("Enter name: ");
        scanf("%s", name);
        if (name[0] == 's') {  
            printf("%s begins with 's'\n", name);
        }
    }
    return 0;
}
