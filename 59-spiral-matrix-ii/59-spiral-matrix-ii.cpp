class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n));
        int minr=0;
        int minc=0;
        int maxr=n-1;
        int maxc=n-1;
        int num=1;
        while(num<=n*n){
         //top wall
            for(int i=minr,j=minc;j<=maxc && num<=n*n;j++)
            {
                res[i][j]=num;
                num++;
            }minr++;
            //right wall
            for(int i=minr,j=maxc;i<=maxr && num<=n*n;i++)
            {
                 res[i][j]=num;
                num++;
            }maxc--;
            //bottom wall
            for(int i=maxr,j=maxc;j>=minc && num<=n*n;j--)
            {
                res[i][j]=num;
                num++;
            }maxr--;
            //left wall
            for(int i=maxr,j=minc;i>=minr && num<=n*n;i--)
            {
             res[i][j]=num;
                num++;
            }minc++;
            
        }
        return res;
    }
};