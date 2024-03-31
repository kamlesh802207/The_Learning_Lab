/*Given a non-negative integer x, return the square root of x 
rounded down to the nearest integer. The returned integer 
should be non-negative as well.

Example 1:
       Input: x = 4
       Output: 2

Example 2:
       Input: x = 8
       Output: 2
*/
#include<iostream>
using namespace std;
int sqrt(int num)
{
    int start=0,end=num,mid,ans;
    if(num<2)
    return num;
    while(start<=end)
    {
       mid=start+(end-start)/2;
       if(mid==num/mid) 
       {
        ans=mid;
        break;
       }
       else if(mid<num/mid)
       {
        ans=mid;
        start=mid+1;
       }
       else
       end=mid-1;
    }
    return ans;
}
int main()
{
    int num;
    cout<<"Enter a number :";
    cin>>num;
    cout<<endl<<"sqrt : "<<sqrt(num);
   
    return 0;
}