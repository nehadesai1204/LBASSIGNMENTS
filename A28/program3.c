/*
Enter the number of rows :
3
Enter the number of cols :
5
A       A       A       A       A
B       B       B       B       B
C       C       C       C       C
*/
#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    
    int i , j = 0;
    char ch = 'A';
    

    for(i = 1 ,ch ='A'; i <= iRow ; i++,ch++)
    {
        for(j = 1 ; j<= iCol ; j++)
        {
             printf("%c\t",ch);
        }
        printf("\n");

    }
}

int main()
{
     int iValue1 = 0;
     int iValue2 = 0;
     printf("Enter the number of rows : \n");
     scanf("%d", &iValue1);

     printf("Enter the number of cols : \n");
     scanf("%d", &iValue2);

     Pattern(iValue1 , iValue2);

     return 0;
}