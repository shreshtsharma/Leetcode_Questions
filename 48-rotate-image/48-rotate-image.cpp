class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         for(int i=0;i<matrix.size();i++)
            {
                for(int j=i+1;j<matrix.size();j++)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        int a=0,s=0,d=0,f=matrix.size()-1;
        for(a,d;a<matrix.size();a++,d++)
        {
            for(s=0,f=matrix.size()-1;s<=f;s++,f--)
            {
                swap(matrix[a][s],matrix[d][f]);
            }
        }
            
           
        
    }
};