#include <iostream>
using namespace std;

int Strlen(char *str)
{
    static int iCnt = 0;

    if (*str != '\0')   // Recursive condition
    {
        iCnt++;
        str++
        Strlen(str);   
    }

    return iCnt;
}

int main()
{
    char arr[20];

    cout << "Enter string: ";
    cin >> arr;

    cout << Strlen(arr);

    return 0;
}
