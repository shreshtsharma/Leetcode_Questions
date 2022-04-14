class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m=matrix.size();//row
        int n=matrix[0].size();//col
        int minr=0;
        int minc=0;
        int maxr=m-1;
        int maxc=n-1;
        int count=0;
        while(count<n*m){
         //top wall
            for(int i=minr,j=minc;j<=maxc && count<n*m;j++)
            {
                res.push_back(matrix[i][j]);
                count++;
            }minr++;
            //right wall
            for(int i=minr,j=maxc;i<=maxr && count<n*m;i++)
            {
                res.push_back(matrix[i][j]);
                count++;
            }maxc--;
            //bottom wall
            for(int i=maxr,j=maxc;j>=minc && count<n*m ;j--)
            {
                res.push_back(matrix[i][j]);
                count++;
            }maxr--;
            //left wall
            for(int i=maxr,j=minc;i>=minr && count<n*m;i--)
            {
                res.push_back(matrix[i][j]);
                count++;
            }minc++;
            
        }
        return res;
    }
};