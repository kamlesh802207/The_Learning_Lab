//Find maximum element of array
#include<iostream>
using namespace std;
int main()
{
    int min=INT_MIN;
    int arr[]={46,65,12,34,59,90,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>min)
        min=arr[i];
    }
    cout<<endl;
    cout<<"Given array= 46,65,12,34,59,90,22 "<<endl;
    cout<<"Maximum number is= "<<min;
    return 0;
}