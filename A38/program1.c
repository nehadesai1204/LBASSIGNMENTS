#include <stdio.h>

void strrevcpyX(char *src , char *dest)
{
    char *end = src;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (end >= src)
    {
        *dest = *end;
        dest++;
        end--;
    }

    *dest = '\0';
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter string : ");
    scanf("%[^'\n']s", Arr);

    strrevcpyX(Arr, Brr);

    printf("Reversed copied string is : %s\n", Brr);

    return 0;
}
