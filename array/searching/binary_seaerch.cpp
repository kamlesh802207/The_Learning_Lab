#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
  int start=0,end=n-1,mid;
  while(start<=end)
  {
    mid=(start+end)/2;
    if(arr[mid]==key)
    {
        return mid;
        break;
    }
    else if(arr[mid]<key)
    start=mid+1;
    else
    end=mid-1;

  }
  return -1;
}
int main()
{
    int arr[1000],n,key;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter array element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key elment"<<endl;
    cin>>key;
    cout<<binarysearch(arr,n,key);
    return 0;
}