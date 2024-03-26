//Insertion sort
#include<iostream>
using namespace std;
int main()
{
    int arr[]={45,23,67,12,54,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else 
            break;
        }
       
    }
     for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    return 0;
}