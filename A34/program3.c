#include <stdio.h>
/*
Enter the character : Q
Q       R       S       T       U       V       W       X       Y       Z
*/
void Display(char ch)
{
    char c;

    if (ch >= 'A' && ch <= 'Z')
    {
        for (c = ch; c <= 'Z'; c++)
        {
            printf("%c\t", c);
        }
        printf("\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (c = ch; c >= 'a'; c--)
        {
            printf("%c\t", c);
        }
        printf("\n");
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}
