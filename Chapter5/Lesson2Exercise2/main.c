#include <stdio.h>

void testCount();
int num = 0;
int x = 0;
int input = 0;

int main()
{
    printf("Enter a number to count to:\n");
    scanf("%d", &input);
    testCount();
    printf("\nVoid Function complete");
}

void testCount()
{
    for(x=0; x<input; x++)
    {
        num += 1;
        printf("%d ", num);
    }
}