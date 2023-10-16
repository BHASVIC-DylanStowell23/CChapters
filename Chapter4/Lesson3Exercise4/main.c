#include <stdio.h>
#include <string.h>

int main()
{
    int i,v,c;
    char string[81] = {};
    char vowels[6] = {"aeiou"};
    char consonants[22] = {"bcdfghjklmnpqrstvwxyz"};
    int numV = 0;
    int numC = 0;

    printf("Enter a sentance\n");
    gets(string);

    for (i=0; i< strlen(string); i++)
    {
        for (v=0; v<6; v++)
        {
            if (string[i] == vowels[v])
            {
                numV += 1;
            }
        }
        for (c=0; c<22; c++)
        {
            if (string[i] == consonants[c])
            {
                numC += 1;
            }
        }
    }
    printf("Vowels: %d\n", numV);
    printf("Consonants: %d\n", numC);
}