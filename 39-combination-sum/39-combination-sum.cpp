class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> vec;
        vector<int> arr;
        solve(vec,arr,candidates,target,0);
        return vec;
    }
    void solve(vector<vector<int>> &vec,vector<int> arr,vector<int> nums,int tar,int ind)
    {
        if(ind==nums.size())
        {
            if(tar==0)
            {
                vec.push_back(arr);
            }
            return;
        }
        if(tar==0)
        {
            vec.push_back(arr);
            return;
        }
        if(nums[ind]<=tar)
        {
            arr.push_back(nums[ind]);
            solve(vec,arr,nums,tar-nums[ind],ind);
            arr.pop_back();
        }
        solve(vec,arr,nums,tar,ind+1);
    }
};