#include<iostream>
using namespace std;
int main()
{
    int arr1[50], arr2[50], arr3[100];
	int n1, n2, i, k;
    cout<<"Enter the Size for First Array: ";
    cin>>n1;
    cout<<"Enter "<<n1<<" Elements for First Array: ";
    for(i=0; i<n1; i++)
    {
        cin>>arr1[i];
        arr3[i] = arr1[i];
    }
    k = i;
    cout<<"\nEnter the Size for Second Array: ";
    cin>>n2;
    cout<<"Enter "<<n2<<" Elements for Second Array: ";
    for(i=0; i<n2; i++)
    {
        cin>>arr2[i];
        arr3[k] = arr2[i];
        k++;
    }
    cout<<"\nThe New Array (Merged Array):\n";
    for(i=0; i<k; i++)
        cout<<arr3[i]<<" ";

    return 0;
}