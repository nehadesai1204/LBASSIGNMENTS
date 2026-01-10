#include <iostream>
using namespace std;

template <class T>
T Sub(T no1, T no2)
{
    return no1 - no2;
}

int main()
{
    int iRet = Sub(20, 10);
    cout << iRet << endl;

    float fRet = Sub(20.5f, 10.2f);
    cout << fRet << endl;

    return 0;
}
