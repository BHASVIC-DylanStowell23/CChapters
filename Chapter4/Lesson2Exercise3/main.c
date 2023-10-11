#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    int counter = 0;
    char answer[8] = {"kitchen"};
    char word[8] = {"???????"};
    char guess[10];

    do
    {
        printf("Guess the word: ");
        gets(guess);

        for (i==0; i<10; i++)
        {
            if (guess[i] == answer[i])
            {
                word[i] = answer[i];
            }
        }
        counter += 1;
        printf("%s\n", word);
    } while (counter < 5 && word != "kitchen");
}