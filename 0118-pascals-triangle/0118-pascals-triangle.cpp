class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows==0)
        {
            return res;
        }
        res.push_back({1});
        for(int i=1;i<numRows;i++)
        {
            vector<int>prev=res[i-1];
            vector<int> temp(i+1,0);
            temp[0]=prev[0];
            temp[i]=prev[i-1];
            for(int j=1;j<i;j++)
            {
                temp[j]=prev[j]+prev[j-1];
            }
            res.push_back(temp);
        }
        return res;

    }
};