/*Find first and last position of element in sorted array.
Sample 1:
     array:2,4,5,5,8,12
     Given target:5
                       Output:2,3
Sample 2:
     array:2,4,5,5,5,12
     Given target:5
                        Output:2,4
Sample 3:
     array:2,4,5,5,5,12
     Given target:7
                        Output:-1,-1
 ------------------------------------------------------------ */

 #include<iostream>
 using namespace std;
 int binary_search(int arr[],int n,int target);
 int binary_search_last(int arr[],int n,int target);
 //find first 
 int binary_search(int arr[],int n,int target)
 {
   int start=0,end=n-1,first=-1;
   int  mid;
   while(start<=end) 
   {
     mid=start+(end-start)/2;
     if(arr[mid]==target)
     {
        first=mid;
        end=mid-1;
        
     }
     else if(arr[mid]<target)
     start=mid+1;
     else
     end=mid-1;
   }
  return first;
 }
 //find last
 int binary_search_last(int arr[],int n,int target)
 {
   int start=0,end=n-1,last=-1;
   int  mid;
   while(start<=end) 
   {
     mid=start+(end-start)/2;
     if(arr[mid]==target)
     {
        last=mid;
        start=mid+1;
        
     }
     else if(arr[mid]<target)
     start=mid+1;
     else
     end=mid-1;
   }
  return last;
 }
 int main()
 {
    int arr[1000],n,target;
    cout<<"Enter size of array :";
    cin>>n;
    cout<<endl;
    cout<<"Enter the sorted array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target elemnt:";
    cin>>target;
    cout<<"index value first :"<<binary_search(arr,n,target)<<endl;
    cout<<"last index value : "<<binary_search_last(arr,n,target);
    return 0;
 }