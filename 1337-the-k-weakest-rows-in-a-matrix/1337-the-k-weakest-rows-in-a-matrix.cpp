class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {    
        vector<int>res;
    
        vector<pair<int,int>> v;
        
        int n=mat.size(), m=mat[0].size();
        
        for(int i=0; i<n; i++)
        {
            int count=0;
            for(int j=0; j<m; j++)
            {
                if(mat[i][j]==1) 
                    count++;
            }
            v.push_back( make_pair(count,i));
            
        }
        
        sort(v.begin(), v.end());
        
        for(int i=0; i<k; i++)
        {
            res.push_back(v[i].second);
        }
        return res;
        
    }
};