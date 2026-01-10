#include <iostream>
using namespace std;

template <class T>
T Add(T no1, T no2)
{
    return no1 + no2;
}

int main()
{
    int iRet = Add(10, 20);
    cout << iRet << endl;

    float fRet = Add(10.5f, 20.3f);
    cout << fRet << endl;

    return 0;
}
