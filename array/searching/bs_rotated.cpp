/*
  **Search in rotated array**

Given the array nums after the possible rotation and an integer target, 
return the index of target if it is in nums, or -1 if it is not in nums.

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

Example 3:

Input: nums = [1], target = 0
Output: -1      */

#include<iostream>
using namespace std;
int rotated_array(int arr[],int n,int target)
{
    int start=0,end=n-1,mid;
    while(start<=end)
    {
         mid=start+(end-start)/2;
        if(arr[mid]==target)
        return mid;
        else if(arr[mid]>=arr[0])
           {
            if(arr[start]<=target&&arr[mid]>target)
            end=mid-1;
            else
            start=mid+1;
           }
       
        else
        {
          if(arr[mid]<target&&arr[end]>=target)
          start=mid+1;
          else
          end=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[100],n,target;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter array element :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target value: ";
    cin>>target;
    cout<<"Index of taget : "<<rotated_array(arr,n,target);
    main();
    return 0;

}
