   ///////////////////////////////////////////////////////////////////////
//  FileName :      program5.c
//  Description :   Problems on string :inplace reverse the string
//  Function Name :   Display
//  Input  :           
// output :            
//  Author :        Neha Desai
//  Date :          4-12-2025
////////////////////////////////////////////////////////////////////////
#include<stdio.h>


void ReverseDisplay(char *str)
{ 
    char *temp = str;

   while(*str != '\0')
   {
      str++;
   }

   while(str >= temp)
   {
      printf("%c",*str);
      str--;
   }
   printf("\n");
}


int main()
{
    char Arr[50] = {'\0'};


    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);

  

    return 0;
}