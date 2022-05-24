class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

        int slope;
          // First pair of point (x0,y0)
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        
        //Second pair of point (x1,y1)
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];
        
        int dx = x1 - x0, dy = y1 - y0;
        
        for(int i = 0; i < coordinates.size(); i++)
        {
            int x = coordinates[i][0], y = coordinates[i][1];
            
            if(dx * (y - y1) != dy * (x - x1))
                return false;
        }
        return true;
    }
};