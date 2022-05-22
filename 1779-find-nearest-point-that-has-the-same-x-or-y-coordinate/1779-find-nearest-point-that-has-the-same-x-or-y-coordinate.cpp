class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ind=-1;
        int min=INT_MAX;
        // cout<<points[0][0]<<" "<<points[0][1];
        
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x || points[i][1]==y)
            {
                int dis=abs(x-points[i][0])+abs(y-points[i][1]);
                if(min>dis)
                {
                    min=dis;
                    ind=i;
                }
            }
        }
        return ind;
    }
};