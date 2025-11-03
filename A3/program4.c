//accept one character from user and convert case if that character 
//input : a    output : A
void DisplayConvert(char Cvalue)
{
    if(Cvalue >= 'a' && Cvalue <= 'z')
    {
        printf("%c",Cvalue - 32);

    }
    else if(Cvalue >= 'A' && Cvalue <= 'Z')
    {
        printf("%c",Cvalue + 32);
    }
    else
    {
        printf("Invalid input");
    }
}

int main()
{
    char cValue = 0;
    printf("Enter character : \n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);
    return 0;

}