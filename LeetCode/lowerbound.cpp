/*Lower Bound:
Given a sorted array of nums and an integer x, write a program to find the lower bound of x.
The lower bound algorithm finds the first and smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.
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
            if(nums[mid]>=x)
            {
                ans=mid;
                right=mid-1;
            }
            else 
            {
                 left=mid+1;
            }
        }
        cout<<ans;
    }
