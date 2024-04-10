/*An array arr is a mountain if the following properties hold:

Example 1:
  Input: arr = [0,1,0]
  Output: 1

Example 2:
  Input: arr = [0,2,1,0]
  Output: 1

Example 3:
  Input: arr = [0,10,5,2]
  Output: 1*/

  #include<iostream>
  using namespace std;
  int arr_mountain(int arr[],int n)
  {
    int start=0,end=n,mid;
    while(start<=end)
    {
      mid=end+(start-end)/2;
      if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
      {
      return mid;
      
      }
      else if(arr[mid]>arr[mid-1])
      start=mid+1;
      else
      end=mid-1;
    }
   
  }
  int main()
  {
    int arr[100],n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter array  element:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Peak index in mountain array:"<<arr_mountain(arr,n);
    return 0;
  }