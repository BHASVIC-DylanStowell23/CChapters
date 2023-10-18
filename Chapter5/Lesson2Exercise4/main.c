#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void revWord(char *revWord);

main ()
{
    char word[5];

    printf("Enter a 4 letter word:");
    scanf("%s", word);
    printf("Before reverse, word is : %s\n", word );
    revWord(word);
    printf("After reverse, word is : %s\n", word );
}

void revWord(char *revWord)
{
    char tempWord[5];
    int j=0;
    for(int i=3;i>=0;i--){
        tempWord[j]= revWord[i];
        j++;
    }
    tempWord[4]=revWord[4];
    strcpy(revWord,tempWord);
}