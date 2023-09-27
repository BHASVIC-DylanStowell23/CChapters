#include <stdio.h>

int main()
{
    int intNum = 0;
    float floatNum = 0;
    char charNum = 0;
    float result = 0;
    printf("Enter an integer, then a float, then a character all separated by a comma \n");
    scanf("%d,%f,%c", &intNum, &floatNum, &charNum);

    result = intNum - floatNum;
    printf("result 1: %f \n", result);
    result = result * charNum;
    printf("result 2: %f", result);
}