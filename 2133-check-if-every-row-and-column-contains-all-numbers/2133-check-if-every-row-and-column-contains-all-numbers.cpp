class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            vector<int> vec (n,0);
            count=0;
            for(int j=0;j<n;j++)
            {
                if(vec[matrix[i][j]-1]==0)
                {
                    vec[matrix[i][j]-1]=1;
                    count++;
                }
            }
            if(count<n)
            {
                return false;
            }
        }
         for(int i=0;i<n;i++)
        {
            vector<int> vec (n,0);
            count=0;
            for(int j=0;j<n;j++)
            {
                if(vec[matrix[j][i]-1]==0)
                {
                    vec[matrix[j][i]-1]=1;
                    count++;
                }
            }
            if(count<n)
            {
                return false;
            }
        }
        return true;
    }
};