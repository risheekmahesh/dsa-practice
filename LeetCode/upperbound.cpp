/*Upper Bound
Given a sorted array of nums and an integer x, write a program to find the upper bound of x.
The upper bound of x is defined as the smallest index i such that nums[i] > x.
If no such index is found, return the size of the array.*/
  
#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n;
    cin>>n;
    vector<int> nums(n);
for(int i=0;i<n;i++)
{
    cin>>nums[i];
}
int x;
cin>>x;
 int left=0,right=n-1,mid,ans=n;

        while(left<=right)
        {
            mid=(left+right)/2;
            if(nums[mid]<=x)
            {
                ans=mid+1;
                left=mid+1;
            }
            else 
            {
                 
                 right=mid-1;
            }
        }
        cout<<ans;
    }
