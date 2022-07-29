class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> res;
        vector<int> temp;

        solve(res,nums,temp);
        vector<vector<int>> v(res.begin(),res.end());
        return v;
        
    }
    void solve(set<vector<int>> &res,vector<int> nums,vector<int> temp)
    {
        if(nums.size()==0)
        {
            sort(temp.begin(),temp.end());
            res.insert(temp);
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