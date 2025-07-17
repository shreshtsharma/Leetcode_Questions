class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int> temp=intervals[0];
        vector<vector<int>> res;
        
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=temp[1])
            {
                temp[1]=max(temp[1],intervals[i][1]);
            }
            else
            {
                res.push_back(temp);
                temp=intervals[i];
            }

        }
        res.push_back(temp);
        return res;
    }
};