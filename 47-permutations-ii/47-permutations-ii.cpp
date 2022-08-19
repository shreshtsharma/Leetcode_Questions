class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size();
        set<vector<int>> st;
        solve(nums,st,n,0);
        for(auto it:st)
        {
            res.push_back(it);
        }
        return res;
    }
    void solve(vector<int> arr,set<vector<int>> &res,int n,int ind)
    {
        if(ind==n)
        {
            res.insert(arr);
            return ;
        }
        for(int i=ind;i<arr.size();i++)
        {
            if(i!=ind && arr[i]==arr[ind])
            {
                continue;
            }
            else 
            {
                swap(arr[i],arr[ind]);
                solve(arr,res,n,ind+1);
                swap(arr[i],arr[ind]);
            }
        }
    }
};