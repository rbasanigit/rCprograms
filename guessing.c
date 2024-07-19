#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num, i, guess, ch = 5;
    printf("Guess the number (between 1 and 50):\n");
    srand(time(0));
    num = rand() % 50 + 1;
    do
    {
        printf("Enter your guess:");
        scanf("%d", &guess);
        if (num == guess)
        {
            printf("Congratulations! You guessed the correct number.\n");
            break;
        }
        if (num < guess)
        {
            printf("Too high!\n");
        }
        if (num > guess)
        {
            printf("Too low!\n");
        }
        ch--;
    }while(ch != 0);
    if(ch == 0 && num != guess)
    {
        printf("Sorry, you've used all your tries. The correct number was %d.\n", num);
    }
    return 0;
}