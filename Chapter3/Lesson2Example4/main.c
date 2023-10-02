#include <stdio.h>

int main() {
    int timesTable = 0;
    int howMany = 0;
    int result = 0;
    int x = 0;
    printf("Enter what times table you want, and how many times you want to see it :");
    scanf("%d,%d", &timesTable, &howMany);

    for (x=1; x<=howMany; x++)
    {
        result = x * timesTable;
        printf("%d x %d = %d \n", x, timesTable, result);
    }
}
