#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    int mistake = 0;
    int correct = 0;
    char answer[8] = {"Kitchen"};
    char word[8] = {"???????"};
    char guess[10];

    do
    {
        printf("Guess the word: ");
        scanf("%s", guess);

        for (i==0; i>10; i++)
        {
            if (guess[i] == answer[i])
            {
                word[i] = answer[i];
                correct = 1;
            }
        }
        if (correct = 0)
        {
            mistake += 1;
        }
        printf("%s\n", word);
    } while (mistake < 5);
}
