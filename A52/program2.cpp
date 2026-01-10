#include<iostream>
using namespace std;

template <class T>
T max(T No1, T No2, T No3)
{
    T iMax = No1;

    if(No2 > iMax)
    {
        iMax = No2;
    }
    if(No3 > iMax)
    {
        iMax = No3;
    }

    return iMax;
}

int main()
{
    cout << max(10, 20, 15) << endl;        // int
    cout << max(5.5, 2.3, 9.8) << endl;     // double
    cout << max('A', 'Z', 'M') << endl;     // char

    return 0;
}
