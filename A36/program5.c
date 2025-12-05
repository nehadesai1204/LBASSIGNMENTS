#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
      
        str++;
    }
      return iCount;
   
    
}
int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr); 
    printf("total no of whitespacesare : %d",iRet);
   
    return 0;

}