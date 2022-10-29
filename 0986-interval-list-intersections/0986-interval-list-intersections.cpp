class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstlist, vector<vector<int>>& secondlist) {
        int i=0;
        int j=0;
        vector<vector<int>> res;
        while(i<firstlist.size() && j<secondlist.size())
        {
            
            vector<int> vec;
            // if(firstlist[i][0]<secondlist[j][0] && firstlist[i][1]<secondlist[j][0] )
            // {
            //     i++;
            // }
            // if(firstlist[i][0]>secondlist[j][1])
            // {
            //     j++;
            // }
                int first=max(firstlist[i][0],secondlist[j][0]);
                int second=min(firstlist[i][1],secondlist[j][1]);
            if(first<=second){
                vec.push_back(first);
                vec.push_back(second);
                 res.push_back(vec);
            }
                if(firstlist[i][1]>secondlist[j][1])
                    j++;
                else
                    i++;
        
        }
        return res;
        
    }
};