#include<iostream>
using namespace std;

void Display()
{
    static int i = 1;   // start from 1

    if(i > 5)           // base condition
    {
        return;
    }

    cout << i << "\t";  // print number
    i++;                // increment

    Display();          // recursive call
}

int main()
{
    Display();          // required as per question
    return 0;
}
