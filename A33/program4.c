#include<stdio.h>

void Digitx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
             printf("%c",*str);
        }
        str++;
      
    
    }
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    Digitx(Arr); 
   
    return 0;

}