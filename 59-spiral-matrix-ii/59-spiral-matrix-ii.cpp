class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        
        vector<vector<int>> spiral(n, vector<int>(n, 0));
        int vis = 0;
        int total = n*n;
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = n -1;
        while(vis < total){
            
            
            for(int i = top, j=left; j<=right && vis<total; j++){
                spiral[i][j] = vis+1;
                vis++;
            }
            top++;
            
            for(int j = right, i=top; i<=bottom && vis<total; i++){
                spiral[i][j]= vis+1;
                vis++;
            }
            right--;
            
            for(int i=bottom, j = right; j>=left && vis<total; j--){
                spiral[i][j] = vis+1;
                vis++;
            }
            bottom--;
            
            for(int j =left, i =bottom; i>=top && vis<total; i--){
                spiral[i][j] = vis+1;
                vis++;
                
            }
            left++;
            
        }
        return spiral;
    }
};