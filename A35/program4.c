#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowel(char *str)
{
      while (*str != '\0')   // string संपेपर्यंत
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' ||
            *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' ||
            *str == 'O' || *str == 'U')
        {
            return TRUE;  // vowel सापडला
        }
        str++; // पुढे जा
    }
    return FALSE;  // कुठेच vowel नाही
}

int main()
{
   
    char arr[20];
    BOOL bRet = FALSE;
   

    printf("Enter string\n");
    scanf("%[^'\n']s", arr);
    bRet = CheckVowel(arr);

    if (bRet == TRUE)
    {
        printf("The String has vowel\n");
    }
    else
    {
        printf("does not contain vowel\n");
    }

    return 0;
}
