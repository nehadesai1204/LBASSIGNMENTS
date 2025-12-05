#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int CountChar(char *str , char ch)
{
    int iCount = 0;
      while (*str != '\0')   
    {
        if (*str == ch)
        {
            iCount++;
             
        }
        str++; 
    }
    return iCount;  
    
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

    iRet = CountChar(arr, cValue);

    printf("Occurence of the character %c is : %d\n", cValue, iRet);

    return 0;
}
