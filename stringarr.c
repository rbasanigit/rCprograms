#include<stdio.h>
int main() {
    char *arr[6] = {"chennai", "hyderabad", "delhi", "kerala", "mumbai", "bangalore"};
    for(int i = 0; i < 6; i++) 
    {
        printf("city: %s\n", arr[i]);
    }
    return 0;
}
