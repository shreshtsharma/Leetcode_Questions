class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        solve(nums,n,res,0);
        return res;

    }
    void solve(vector<int> arr,int n,vector<vector<int>> &res,int ind)
    {
        if(ind==n)
        {
            res.push_back(arr);
            return;
        }
        for(int i=ind;i<n;i++)
        {
            swap(arr[i],arr[ind]);
            solve(arr,n,res,ind+1);
            swap(arr[i],arr[ind]);
        }
    }
};