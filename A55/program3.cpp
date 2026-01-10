#include <iostream>
using namespace std;

template <class T>
T Div(T no1, T no2)
{
    if (no2 == 0)
    {
        cout << "Division by zero not allowed" << endl;
        return 0;
    }
    return no1 / no2;
}

int main()
{
    int iRet = Div(20, 10);
    cout << iRet << endl;

    float fRet = Div(20.0f, 4.0f);
    cout << fRet << endl;

    return 0;
}
