#include<iostream>
using namespace std;
int kth_element(int arr[],int n,int k)
{
  int start=0,end=n-1,ans;
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
        cout<<"Enter size of array :";
        cin>>n;
        cout<<endl;
        cout<<"Enter array element:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter kth element: ";
        cin>>k;
        cout<<"ans="<<kth_element(arr,n,k);
        return 0;
    }

