class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> vec;
        vector<int> arr;
        solve(0,vec,arr,candidates,target);
        
        return vec;
    }
    void solve(int ind,vector<vector<int>> &vec,vector<int> arr,vector<int> cand,int tar)
    {
        if(ind==cand.size())
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
    
    for(int i=ind;i<cand.size();i++)
    {
        if(cand[i]<=tar)
        {
            if(i>ind && cand[i]==cand[i-1])continue;
            
            arr.push_back(cand[i]);
            solve(i+1,vec,arr,cand,tar-cand[i]);
            arr.pop_back();
            
        }
    }
        
    }
};