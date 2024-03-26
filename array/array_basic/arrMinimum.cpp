//Find the minimum element in this array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={34,67,12,32,87,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<max)
        {
            max=arr[i];

        }

    }
    cout<<" The minimum number of element = "<<max;
    return 0;
}