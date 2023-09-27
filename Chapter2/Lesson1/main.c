#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int randNum = rand() % 11;
    int answer = 0;

    printf("%d\n", randNum);
    printf("Guess the number between 1-10: \n");
    scanf("%d", &answer);

    if(answer == randNum)
    {
        printf("Congratulations, you got it!");
    }
    else if (answer-1 == randNum || answer+1 == randNum)
    {
        printf("Close!");
    }
    else
    {
        printf("Better luck next time!");

    }
}