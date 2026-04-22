#include<bits/stdc++.h>
using namespace std;
    vector<int> getFloorAndCeil(vector<int> &nums, int x) {
        int left=0,right=nums.size()-1,mid,floor=-1,ceil=-1;
        vector<int>ans(2);
        while(left<=right)
        {
            mid=(left+right)/2;
            if (nums[mid]==x)
            {
                return{x,x};
            }
            else if(nums[mid]<x)
            {
               floor=nums[mid];
                left=mid+1; 
            }
            else 
            {
                ceil=nums[mid];
                right=mid-1;

            }
        }
       return {floor,ceil};
   
    }
int main ()
{
    int n,x;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cin>>x;
    vector<int>ans=getFloorAndCeil(nums,x);
    cout<<ans[0]<<" "<<ans[1];
}
