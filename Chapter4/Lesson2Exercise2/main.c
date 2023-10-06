#include <stdio.h>

int main()
{
    int array[3];

    printf("Enter 3 numbers separated by a space:\n");
    scanf("%d %d %d", &array[1], &array[2], &array[3]);

    if ((array[1] + array[2] + array[3]) % 3 == 0)
    {
        if (array[2] + 1 != array[1] && array[3] + 1 != array[2] && array[1] + 1 != array[3])
        {
            printf("%d %d %d is a valid siteswap pattern", array[1], array[2], array[3]);
        }
        else
        {
            printf("%d %d %d is not a valid siteswap pattern", array[1], array[2], array[3]);
        }
    }
    else
    {
        printf("%d %d %d is not a valid siteswap pattern", array[1], array[2], array[3]);
    }
}