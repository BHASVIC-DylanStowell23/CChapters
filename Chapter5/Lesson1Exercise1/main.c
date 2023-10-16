#include <stdio.h>

int divEleven(int x);

int main()
{
    int answer;
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    answer = divEleven(num);
    printf("The number %d can be divided by eleven %d times.", num, answer);
}

int divEleven(int x)
{
    x = x / 11;
    return x;
}