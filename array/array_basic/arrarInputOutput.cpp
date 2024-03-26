//Input output in array
#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<endl;
    cout<<"Enter the size of array=";
    cin>>n;
    int arr[n];
    cout<<"Enter array element..."<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array = ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}