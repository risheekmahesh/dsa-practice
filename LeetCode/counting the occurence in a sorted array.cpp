/*Count Occurrences in a Sorted Array
You are given a sorted array of integers arr and an integer target. Your task is to determine how many times target appears in arr.
Return the count of occurrences of target in the array.*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     int searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, mid, first = -1, last = -1;
        // Finding the first occurrence
        while (left <= right) {
            mid = (left + right) / 2;
            if (nums[mid] == target) {
                first = mid;
                right = mid - 1;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        // Finding the  last occurrence
        left = 0, right = nums.size() - 1;
        while (left <= right) {
            mid = (left + right) / 2;
            if (nums[mid] == target) {
                last = mid;
                left = mid + 1;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return last-first+1; //counting the occurence of the element in the vector
    }
};

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    Solution obj;
    int  result = obj.searchRange(nums, target);
    cout << result;
    return 0;
}
