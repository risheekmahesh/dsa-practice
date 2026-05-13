# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int left=0,right=n-1,ans=INT_MAX;
    int mid,index=-1;
    while(left<=right)
    {
        mid=(left+right)>>1;
        if(a[left]<=a[right])
        {
            if(a[left]<ans)
            {
                index=left;
                ans=a[left];
            }
            break;
        }
        if(a[left]<=a[mid])
        {
             if(a[left]<ans)
            {
                index=left;
                ans=a[left];
            }
           
            left=mid+1;
        }
        else
        {
            right=mid-1;
             if(a[left]<ans)
            {
                index=mid;
                ans=a[left];
            }
            
        }
    }
        cout<<index;
}
