#include<iostream>
using namespace std;

void Display()
{
    static int i = 5;   // start from 5

    if(i < 1)           // base condition
    {
        return;
    }

    cout << i << "\t";  // print number
    i--;                // decrement

    Display();          // recursive call
}

int main()
{
    Display();
    return 0;
}
