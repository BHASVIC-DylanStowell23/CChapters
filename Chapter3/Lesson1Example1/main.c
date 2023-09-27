#include <stdio.h>
#include <time.h>

int rand();

int main()
{
    srand(time(NULL));
    int randNum = rand() % 11;
    int answer = 0;
    int guesses = 3;

    while (answer != randNum && guesses > 0)
    {
        printf("Guess the number between 1-10: \n");
        scanf("%d", &answer);
        if (randNum - answer > 0)
        {
            printf("Too low!\n");
        }
        else if (randNum - answer < 0)
        {
            printf("Too high!\n");
        }
        guesses = guesses - 1;
    }

    if(guesses == 0)
    {
        printf("You ran out of lives!");
    }
    else
    {
        printf("Correct!");
    }
}