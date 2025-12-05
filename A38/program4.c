#include <stdio.h>

void strcpyLow(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')   // uppercase  letter
        {
            *dest = *src + 32;            // convert to lowercase
        }
        else
        {
            *dest = *src;                 // copy as it is
        }

        src++;
        dest++;
    }

    *dest = '\0';  // terminate string
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    strcpyLow(Arr, Brr);

    printf("String in CAPITAL: %s\n", Brr);

    return 0;
}
