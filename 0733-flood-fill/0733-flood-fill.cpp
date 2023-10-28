class Solution {
public:

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        int m=image.size();
        int n=image[0].size();
        queue<pair<int,int>>q;
        q.push(make_pair(sr,sc));
        while(!q.empty())
        {
            auto ele=q.front();
            int row=ele.first;
            int col=ele.second;
            if(image[row][col]==color){
            q.pop();
            continue;
            }
            for(int i=0;i<4;i++)
            {
                int nrow=row+dr[i];
                int ncol=col+dc[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n)
                {
                    if(image[nrow][ncol]==image[row][col])
                    {
                        q.push(make_pair(nrow,ncol));
                    }
                }
            }
            image[row][col]=color;
            q.pop();
        }
        return image;
    }
};