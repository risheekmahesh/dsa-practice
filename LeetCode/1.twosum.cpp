class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target){

    vector<pair<int,int>> v;
    for(int i = 0; i < a.size(); i++)
        v.push_back({a[i], i});

    sort(v.begin(), v.end());

    int left = 0, right = v.size() - 1;
    vector<int> ans;

    while(left < right)
    {
        int sum = v[left].first + v[right].first;

        if(sum == target)
        {
            ans.push_back(v[left].second);
            ans.push_back(v[right].second);
            break;
        }
        else if(sum < target)
        {
            left++;
        }
        else
            right--;
    }
    return ans;

    }
};
