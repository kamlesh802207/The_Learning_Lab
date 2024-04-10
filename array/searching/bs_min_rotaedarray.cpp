/*iven the sorted rotated array nums of unique elements,
 return the minimum element of this array.

Example 1:
  Input: nums = [3,4,5,1,2]
  Output: 1

Example 2: 
  Input: nums = [4,5,6,7,0,1,2]
  Output: 0

Example 3:
Input: nums = [11,13,15,17]
Output: 11
  */
 #include<iostream>
 using namespace std;
 int min_arr(int arr[],int n)
 {
    int start=0,end=n-1,mid,ans;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        start=mid+1;
        else
        {
        ans=arr[mid];
        end=mid-1;
        }
        
    }
    return ans;
 }
 int main()
 {
    int arr[100],n,mid;
    cout<<endl;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter array element:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"minimum number in rotated sorted array: "<<min_arr(arr,n);
    return 0;
 }