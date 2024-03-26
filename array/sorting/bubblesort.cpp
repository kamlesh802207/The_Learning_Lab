#include<iostream>
using namespace std;
int main()
{
    
    int arr[]={8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=n-2;i>=0;i--)
    {
       bool swapped=0;
      for(int j=0;j<=i;j++)
      {
       
        if(arr[j]>arr[j+1])
        {
            swapped=1; 
            swap(arr[j],arr[j+1]);
            
        }
      }
      if(swapped==0)
      break;
    }
    for(int k=0;k<n;k++)
    cout<<arr[k]<<" ";

    return 0;
}