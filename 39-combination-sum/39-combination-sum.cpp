class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>vec;
        vector<int>arr;
        solve(0,vec,arr,candidates,target);
        return vec;
        
    }
    void solve(int ind,vector<vector<int>> &vec,vector<int> arr,vector<int> nums,int tar)
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
            solve(ind,vec,arr,nums,tar-nums[ind]);
            arr.pop_back();

        }
        solve(ind+1,vec,arr,nums,tar);
    }
};