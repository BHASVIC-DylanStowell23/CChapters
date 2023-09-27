#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int result = 0;
    printf("Enter two values, separated by a comma\n");
    scanf("%d,%d", &num1, &num2);
    result = num1 * num2;
    printf("result: %d", result);
}