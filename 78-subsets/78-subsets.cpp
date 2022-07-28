class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;

        solve(res,nums,temp);
        return res;
    }
    void solve(vector<vector<int>> &res,vector<int> nums,vector<int> temp)
    {
        if(nums.size()==0)
        {
            res.push_back(temp);
            return;
        }
        vector<int> op1=temp;
        vector<int> op2=temp;
        op2.push_back(nums[0]);
        nums.erase(nums.begin() + 0);
        solve(res,nums,op1);
        solve(res,nums,op2);
        
        
    }
};