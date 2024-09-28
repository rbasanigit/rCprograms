#include <stdio.h>
#include <string.h>
struct Car 

{
    char model[50];
    int year;
    float price;
};
void displayCarDetails(struct Car *c) 
{
    printf("Car Model: %s\n", c->model);
    printf("Year: %d\n", c->year);
    printf("Price: $%.2f\n", c->price);
}
void modifyCarDetails(struct Car *c, int new_year, float new_price) 
{
    c->year = new_year;
    c->price = new_price;
}
int main() 
{
    struct Car car;
    struct Car *ptr = &car;
    strcpy(ptr->model, "Tesla Model S");
    ptr->year = 2020;
    ptr->price = 79999.99;
    printf("Initial details:\n");
    displayCarDetails(ptr);
    modifyCarDetails(ptr, 2022, 74999.99);
    printf("\nAfter modification:\n");
    displayCarDetails(ptr);
    return 0;
}
