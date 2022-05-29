class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0,j=0;i<mat[0].size()&& j<mat.size();i++,j++)
        {
            sum+=mat[i][j];
        }
        for(int i=0,j=mat.size()-1;i<mat[0].size() && j>=0;i++,j--)
        {
            if(i==j)
                continue;
            else
                sum+=mat[i][j];
        }
        return sum;
    }
};