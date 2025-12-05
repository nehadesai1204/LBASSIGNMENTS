#include <stdio.h>
//covert capital to small and small to capital
void Display(char ch)
{
    if (ch >= 'a' && ch <= 'z')        // small → capital
    {
        ch = ch - 32;
    }
    else if (ch >= 'A' && ch <= 'Z')   // capital → small
    {
        ch = ch + 32;
    }
    

    printf("Output : %c\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}
