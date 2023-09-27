#include <stdio.h>

int main()
{
    char day;
    int childT = 0;
    int adultT = 0;
    int people = 0;
    float price = 0;

    printf("Enter W if you are visitng on a weekday, S for weekend, B for bankholiday:\n");
    scanf("%c", &day);

    printf("How many child tickets do you need?\n");
    scanf("%d", &childT);
    printf("How many adult tickets do you need?\n");
    scanf("%d", &adultT);

    if (day == 'W' || day == 'w')
    {
        price += childT * 5;
        price += adultT * 8;
    }

    else if (day == 'S' || day == 's')
    {
        price += childT * 7.50;
        price += adultT * 12;
    }

    else if (day == 'B' || day == 'b')
    {
        price += childT * 7.50;
        price += adultT * 14;
    }

    if (childT + adultT > 8)
    {
        price = price * 0.9;
        printf("10 percent discount applied \n");
    }

    printf("Your total price is: %f pounds", price);
}
