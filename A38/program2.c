#include<stdio.h>

void strcpyRemoveWhite(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')     // skip white spaces
        {
            *dest = *src;   // copy only non-space characters
            dest++;
        }
        src++;
    }
    *dest = '\0';           // terminate string
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    strcpyRemoveWhite(Arr, Brr);

    printf("String after removing white spaces: %s\n", Brr);

    return 0;
}
