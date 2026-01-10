#include <iostream>
using namespace std;

template <class T>
void CopyArray(T *src , T *dest , int iSize)
{
    int iCnt = 0;
    int iSize = 0;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        dest[i] = src[i];
    }
}

int main()
{
    int Arr[] = {10 , 20 , 30 , 40 , 50};
    int Brr[5];

    int iRet = 0;

    CopyArray(Arr , Brr , 5);

     cout<<"Copied Array : ";

    for(iRet = 0; iRet <= 5;iRet++)
    {
        cout<<Brr[i]<< " ";
    }

    return 0;

   
  
}