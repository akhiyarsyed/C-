#include<iostream>
using namespace std;
void prime(int n)
{
    int i,m=0,flag=0;
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            cout<<"Number is not Prime."<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"Number is Prime."<<endl;
}
int main()
{
    int n;
    cout<<"Enter the Number to check Prime: ";
    cin>>n;
    prime(n);
    return 0;
}