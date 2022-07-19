class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> temp;
        temp.push_back(1);
        if(numRows >=1)
        {
            res.push_back(temp);
        }
        for(int i=1;i<numRows;i++)
        {
            vector<int> vec;
            for(int j=0;j<=i;j++)
            {
                if(j==0)
                {
                    vec.push_back(res[i-1][0]);
                }
                else if(j==i)
                {
                    vec.push_back(res[i-1][j-1]);
                }
                else
                {
                    vec.push_back(res[i-1][j-1] + res[i-1][j]);
                }
            }
            res.push_back(vec);
        }
        return res;
    }
};