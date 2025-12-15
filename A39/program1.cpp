#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 0;   // persists across recursive calls

    if(iCnt == 6)          // Base condition: print 6 stars
    {
        return;
    }

    cout << "*\t";         // Print star
    iCnt++;                // Increment counter

    Display();             // Recursive call
}

int main()
{
    Display();             // As required in the question
    return 0;
}
