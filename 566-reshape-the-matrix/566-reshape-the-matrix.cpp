
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size(),m = mat[0].size();
        if(n*m!=r*c) 
            return mat;
        
        int x = 0,y = 0;
        vector<vector<int>> ans(r,vector<int>(c,0)); 
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[i][j] = mat[x][y];
                y++;
                if(y==m) // move to the next row when this column ends
                    y=0,x++;
            }
        }
        return ans;
    }
    
    
};