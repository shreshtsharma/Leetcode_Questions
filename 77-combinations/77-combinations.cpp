class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> vec;
        vector<int> arr;
        solve(n,k,1,vec,arr);
        return vec;
    }
    void solve(int n,int k,int ind,vector<vector<int>>&vec,vector<int> &arr)
    {
        if(arr.size()==k)
        {
            vec.push_back(arr);
            return;
        }
        for(int i=ind;i<=n;i++)
        {
            arr.push_back(i);
            solve(n,k,i+1,vec,arr);
            arr.pop_back();
        }
    }
    
};