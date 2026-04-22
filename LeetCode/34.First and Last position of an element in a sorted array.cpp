class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1,mid,first=-1,last=-1;
        vector<int>ans(2);
        while(left<=right)
        {
            mid=(left+right)/2;
            if (nums[mid]==target)
            {
                first=mid;
                right=mid-1;          
            }
            else if(nums[mid]<target)
             {
                   left=mid+1;
                 }
            else 
            right=mid-1;
        }
        left=0,right=nums.size()-1;
        while(left<=right)
        {
            mid=(left+right)/2;
            if (nums[mid]==target)
            {
                last=mid;
                left=mid+1;
               
            }
            else if(nums[mid]<target)
             {
                   left=mid+1;
                 }
            else 
            right=mid-1;
        }
       return {first,last}; 
    }
};
