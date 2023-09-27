#include <stdio.h>

int main()
{
    float initialNumber = 0;
    float number = 0;
    char magicNum = 'n';

    printf("Enter a number \n");
    scanf("%f", number);
    initialNumber = number;

    do
    {
        printf("Enter a number \n");
        scanf("%f", number);
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
            printf("%d is not a magic number", initialNumber);
        }
    } while (magicNum != 'y');

    printf("%d is a magic number", initialNumber);
}
