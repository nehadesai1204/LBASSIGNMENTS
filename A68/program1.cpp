#include<iostream>
using namespace std;

void Display()
{
    static int i = 0;

    if(i <= 4)
    {
        cout<<"*    ";
        i++;
        Display();
    }
}
int main()
{
    Display();

    return 0;
}