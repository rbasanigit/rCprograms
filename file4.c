#include <stdio.h>
int main()
{
    FILE *file;
    char name[50];
    int age;
    float height;
    file = fopen("person.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height (in meters): ");
    scanf("%f", &height);
    fprintf(file, "%s %d %.2f\n", name, age, height);
    fclose(file);
    file = fopen("person.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }
    fscanf(file, "%s %d %f", name, &age, &height);
    printf("\nData read from file:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    fclose(file);
    return 0;
}