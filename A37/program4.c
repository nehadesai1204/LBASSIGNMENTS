#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int LastChar(char *str , char ch)
{
    int iCnt = 0;
    int iLast = -1;
      while (*str != '\0')   
    {
        if(*str == ch)
        {
            iLast =  iCnt; 
        }
        str++; 
        iCnt++;
    }

    return iLast;
    
    
}

int main()
{
   
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character to search:\n");
    scanf(" %c", &cValue);   

    iRet = LastChar(arr, cValue);

    printf("Occurence of the character %c is at position : %d\n", cValue, iRet);

    return 0;
}
