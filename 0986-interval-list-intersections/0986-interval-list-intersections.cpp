class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstlist, vector<vector<int>>& secondlist) {
        vector<vector<int>> res;
        for(int j=0;j<secondlist.size();j++)
        {
             for(int i=0; i<firstlist.size();i++)
            {
            vector<int> vec;
            if(firstlist[i][0]<secondlist[j][0] && firstlist[i][1]<secondlist[j][0] ||              firstlist[i][0]>secondlist[j][1])
            {
                continue;
            }
            else
            {
                int first=max(firstlist[i][0],secondlist[j][0]);
                int second=min(firstlist[i][1],secondlist[j][1]);
                vec.push_back(first);
                vec.push_back(second);
                 res.push_back(vec);
            }
           
        }
    }
             return res;
    }
    
};