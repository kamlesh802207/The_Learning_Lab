/*
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.
Return the kth positive integer that is missing from this array.

Example 1:
   Input: arr = [2,3,4,7,11], k = 5
   Output: 9

Example 2:
    Input: arr = [1,2,3,4], k = 2
    Output: 6

*/
#include<iostream>
using namespace std;
int kth_element(int arr[],int n,int k)
{
  int start=0,end=n-1,ans=n,mid;
  while(start<=end)
  {
   int  mid=start+(end-start)/2;
   if(arr[mid]-mid-1>=k)
   {
    ans=mid;
    end=mid-1;
   }
   else
   start=mid+1;
  }
  return ans+k;
}

    int main()
    {
        int arr[1000],n,k;
        cout<<endl;
        cout<<"Enter size of array :";
        cin>>n;
        cout<<endl;
        cout<<"Enter array element:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<" Enter kth element: ";
        cin>>k;
        cout<<"ans="<<kth_element(arr,n,k);
        main();
        return 0;
    }

