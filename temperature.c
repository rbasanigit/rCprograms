#include<stdio.h>
int main()
{
    float temp;
    printf("Enter the temperature in Celsius:");
    scanf("%f", &temp);
    if(temp < 0)
    {
        printf("It's freezing cold\n");
    }
    else if(temp < 0 && temp < 20)
    {
        printf("It's a bit chilly\n");
    }
    else if(temp > 20 && temp < 30)
    {
        printf("It's a pleasant day\n");
    }
    else
    {
        printf("It's quite warm\n");
    }
    return 0;
}