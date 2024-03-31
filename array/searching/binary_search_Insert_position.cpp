/* 
  ------------------------------------------------------------------
  (Search inserted position)
  Given a sorted array of distinct integers and a target ,
  return the index if the target is found. if not return 
  the index where it eould be if it where inserted in order.

  sample:1
          Input: num=[1,3,5,6],target=5
          Output:2

  sample:2
          Input: num=[1,3,5,6],target=2
          Output:1

  sample:3
          Input: num=[1,3,5,6],target=7
          Output:4

---------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int bineary_search_index_position(int arr[],int n,int target)
{
    int start=0,end=n-1,mid,index=n;
   
    while(start<=end)
    {
         mid=start+(end-start)/2;
      if(arr[mid]==target)
      {
        index=mid;
        break;
      }
      else if(arr[mid]<target)
      {
      start=mid+1;
      }
      else
      {
      index=mid;
      end=mid-1;
      }
      
    }
    
    return index;
}
int main()
{
    int arr[1000],n,target;
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<endl;
    cout<<"Enter array elemnt :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target value :";
    cin>>target;
    cout<<"index value :"<<bineary_search_index_position(arr,n,target);
    return 0;
}