class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr;
        vector<vector<int>> vec;
        solve(arr,vec,k,n,1);
        return vec;
    }
    void solve(vector<int> &arr,vector<vector<int>> &vec,int k,int tar,int ind)
    {
        if(arr.size()==k)
        {
            if(tar==0)
            {
                vec.push_back(arr);
            }
            return;
        }
        
        for(int i=ind;i<=9;i++)
        {
            if(i<=tar)
            {
                arr.push_back(i);
                solve(arr,vec,k,tar-i,i+1);
                arr.pop_back();
            }
        }
    }
};