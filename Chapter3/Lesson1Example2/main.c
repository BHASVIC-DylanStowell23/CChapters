#include <stdio.h>

int main() {
    int numberValues = 0;
    int counter;
    float value = 0;
    float totalValue = 0;

    printf("How many values do you want to enter \n");
    scanf("%d", &numberValues);
    counter = numberValues;

    while (counter > 0)
    {
        printf("Enter a value \n");
        scanf("%f", &value);
        totalValue = totalValue + value;
        counter = counter - 1;
    }
    printf("The mean value is : %f", totalValue/numberValues);
}
