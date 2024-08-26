#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    if(n%7==0 || n%10==7)
    {
        cout<<"Buzz number";
    }
    else
    {
        cout<<"Not a buzz number";
    }
    return 0;
}