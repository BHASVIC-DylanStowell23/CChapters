#include <stdio.h>

int main()
{
    float num1 = 0;
    float num2 = 0;
    float output = 0;
    char operator;

    printf("Enter your first number \n");
    scanf("%f", &num1);
    printf("Enter your second number \n");
    scanf("%f", &num2);
    printf("Do you want to + - * / \n");
    fflush(stdin);
    scanf("%c", &operator);

    switch (operator)
    {
        case '+':
            output = num1 + num2;
            break;
        case '-':
            output = num1 - num2;
            break;
        case '*':
            output = num1 * num2;
            break;
        case '/':
            output = num1 / num2;
            break;
    }

    printf("%f %c %f = %f", num1, operator,num2, output);
}