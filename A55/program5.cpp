#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b, T c, T d)
{
    T max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;

    return max;
}

int main()
{
    int iRet = Max(10, 20, 5, 15);
    cout << iRet << endl;

    float fRet = Max(10.5f, 20.3f, 5.6f, 15.8f);
    cout << fRet << endl;

    return 0;
}
