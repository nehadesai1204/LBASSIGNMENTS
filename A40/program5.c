#include<stdio.h>

void Display(char ch)
{
    static char i = 'a';   

    if(i > ch)            
    {
        return;
    }

    printf("%c\t", i);     
    i++;                  

    Display(ch);           
}

int main()
{
    char chValue = '\0';

    printf("Enter ending alphabet: ");
    scanf(" %c", &chValue);

    Display(chValue);

    return 0;
}
