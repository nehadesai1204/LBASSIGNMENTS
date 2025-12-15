#include<iostream>
using namespace std;

void Display()
{
    static char ch = 'a';   // start from a

    if(ch > 'f')            // base condition
    {
        return;
    }

    cout << ch << "\t";     // print character
    ch++;                   // move to next character

    Display();              // recursive call
}

int main()
{
    Display();
    return 0;
}
