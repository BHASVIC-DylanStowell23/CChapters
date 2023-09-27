#include <stdio.h>

int main() {
    char UpperLetter;
    char LowerLetter;
    printf("Enter an upper case letter: \n");
    scanf("%c", &UpperLetter);
    LowerLetter = UpperLetter + 32;
    printf("Lower case letter: \n%c", LowerLetter);

}
