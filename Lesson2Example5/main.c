#include <stdio.h>

int main() {
    char character = 'x';
    int x = 0;
    int y = 0;
    int incriment = 0;
    int numY = 10;

    for (x=1; x<=11; x++)
    {
        for (y=1; y<=10; y++)
        {
            if(incriment >= numY)
            {
                printf("y");
            }
            if (incriment < numY)
            {
                printf("x");
            }
            incriment += 1;
        }
        printf("\n");
        incriment = 0;
        numY -= 1;
    }
}