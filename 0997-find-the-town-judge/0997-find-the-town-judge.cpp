class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,vector<int>>mp;
        if(n==1)
            return 1;
        if(trust.size()==0)
        return -1;
    
        for(int i=0;i<trust.size();i++)
        {
            mp[trust[i][1]].push_back(trust[i][0]);
        }
        int res=-1;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second.size()==n-1)
            {
                 res= i->first;
                
            }
        }
        
        for(int i=0;i<trust.size();i++)
        {
            if(trust[i][0]==res)
            return -1;
        }
        return res;
    
    }
};