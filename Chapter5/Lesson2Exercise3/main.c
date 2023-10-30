#include <stdio.h>

float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);

int main()
{
    float num1 = 0;
    float num2 = 0;
    float output = 0;
    char operator;

    printf("Enter your first number \n");
    fflush(stdin);
    scanf("%f", &num1);
    printf("Enter your second number \n");
    fflush(stdin);
    scanf("%f", &num2);
    printf("Do you want to + - * / \n");
    fflush(stdin);
    scanf("%c", &operator);

    switch (operator)
    {
        case '+':
            output = add(num1, num2);
            break;
        case '-':
            output = sub(num1, num2);
            break;
        case '*':
            output = mult(num1, num2);
            break;
        case '/':
            output = div(num1, num2);
            break;
    }

    printf("%.2f %c %.2f = %.2f", num1, operator,num2, output);
}

float add(float num1, float num2)
{
    float x;
    x = num1 + num2;
    return x;
}
float sub(float num1, float num2)
{
    float x;
    x = num1 - num2;
    return x;
}
float mult(float num1, float num2)
{
    float x;
    x = num1 * num2;
    return x;
}
float div(float num1, float num2)
{
    float x;
    x = num1 / num2;
    return x;
}