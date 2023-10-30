#include <stdio.h>

int editScores(int x, int i);
int printScores();

int main ()
{
    int scores[6];
    int i;
    for (i=0; i<5; i++)
    {
        printf("Enter score %d: ", i+1);
        scanf("%d", &scores[i]);

        if(scores[i] > 75 || scores[i] < 0)
        {
            printf("Score invalid\n");
        }
        else
        {
            editScores(int scores[i], int i);
        }
    }
}

int editScores(int x, int i)
{
    if (x < 20)
    {
        return 0;
    }
}