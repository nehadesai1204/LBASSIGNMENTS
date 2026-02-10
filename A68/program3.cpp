#include<iostream>
using namespace std;

 void Display(int iNo)
 {
    
     if(iNo != 0)
     {
        cout<<iNo<<"\t";
        iNo--;
        Display(iNo);
     }

    
 }
int main()
{
    Display(5);
    return 0;
}