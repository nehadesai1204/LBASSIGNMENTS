#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckChar(char *str , char ch)
{
      while (*str != '\0')   
    {
        if (*str == ch)
        {
            return TRUE;  
        }
        str++; 
    }
    return FALSE;  
    
}

int main()
{
   
    char arr[20];
    char cValue ;
    BOOL bRet = FALSE;
   

    printf("Enter string\n");
    scanf("%[^'\n']s", arr);

    fflush(stdin);

    printf("Enter the character  to search : \n");
    scanf("%c", &cValue);

    bRet = CheckChar(arr,cValue);

    if (bRet == TRUE)
    {
        printf("Character found \n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}
