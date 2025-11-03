//write a program which accepts number from user and print evn factors 
//of that number

void Display(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1 ; i< (iNo/2) ; i++)
    {
        if(iNo % i == 0)
        {
            printf("%d",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}