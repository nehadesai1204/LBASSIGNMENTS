#include <stdio.h>

void Display(char ch)
{
    int ascii = (int)ch;

    printf("Decimal      : %d\n", ascii);
    printf("Octal        : 0%o\n", ascii);
    printf("Hexadecimal  : 0X%X\n", ascii);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}
