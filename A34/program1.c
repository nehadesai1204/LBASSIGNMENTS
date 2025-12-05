#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tOctal\tHex\n");
    printf("---------------------------------\n");

    for (i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%o\t%X\n", (char)i, i, i, i);
    }
}

int main()
{
    DisplayASCII();
    return 0;
}
