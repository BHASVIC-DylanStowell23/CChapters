#include <stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int div(int num1, int num2);

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

    printf("%f %c %f = %f", num1, operator,num2, output);
}

int add(int num1, int num2)
{
    int x;
    x = num1 + num2;
    return x;
}
int sub(int num1, int num2)
{
    int x;
    x = num1 + num2;
    return x;
}
int mult(int num1, int num2)
{
    int x;
    x = num1 + num2;
    return x;
}
int div(int num1, int num2)
{
    int x;
    x = num1 + num2;
    return x;
}