class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> vec;
        vector<int> arr;
        int rep=INT_MAX;
        solve(0,vec,arr,candidates,target,rep);
        
        return vec;
    }
    void solve(int ind,vector<vector<int>> &vec,vector<int> arr,vector<int> cand,int tar,int rep)
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
        if(cand[i]!=rep && cand[i]<=tar)
        {
            arr.push_back(cand[i]);
            solve(i+1,vec,arr,cand,tar-cand[i],rep);
            arr.pop_back();
            rep=cand[i];
            
        }
    }
        
    }
};