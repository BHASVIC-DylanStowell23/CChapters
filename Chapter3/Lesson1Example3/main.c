#include <stdio.h>

int main()
{
    int initialNumber = 0;
    int number = 0;
    char magicNum = 'n';

    do
    {
        printf("Enter a number \n");
        scanf("%d", &number);
        initialNumber = number;
        number = number / 7;
        number = number * 5;
        if (number < 100)
        {
            magicNum = 'y';
        }
        number = initialNumber;
        number = number / 3;
        number = number * 5;
        if (number < 100)
        {
            magicNum = 'y';
        }
        if (magicNum == 'n')
        {
            printf("%d is not a magic number \n", initialNumber);
        }
    } while (magicNum != 'y');

    printf("%d is a magic number", initialNumber);
}