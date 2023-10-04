#include <stdio.h>

int main()
{
    int array[10];
    int total = 0;
    int numOverTotal = 0;
    int highest = 0;
    int lowest = 9999999999;

    int count = 0;
    int i = 0;

    for(count = 0; count < 10; count++)
    {
        printf("Enter Score %d: \n", count + 1);
        scanf("%d", &array[count]);
        total += array[count];
        if(array[count] > highest)
        {
            highest = array[count];
        }
        if(array[count] < lowest)
        {
            lowest = array[count];
        }
    }

    for(i = 0; i < 10; i++)
    {
        if(array[i] > total/10)
        {
            numOverTotal += 1;
        }
    }

    printf("Average Score : %d\n", total/10);
    printf("Num of Scores > Average : %d\n", numOverTotal);
    printf("High Score is : %d \nLow Score is : %d\n", highest, lowest);
}