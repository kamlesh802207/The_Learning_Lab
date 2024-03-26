#include<iostream>
using namespace std;
int main()
{
    int arr[6]={34,12,45,87,32,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    int index;
    for(int i=0;i<n-1;i++)
    {
     index=i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[index]>arr[j])
        index=j;
    }
    swap(arr[i],arr[index]);
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}