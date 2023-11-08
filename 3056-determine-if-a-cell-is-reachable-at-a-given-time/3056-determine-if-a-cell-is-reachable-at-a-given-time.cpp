class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int x=abs(sx-fx);
        int y=abs(sy-fy);
        int maxtime=x+y;
        if(sx==fx && sy==fy)
        {
            if(t!=1)
            return true;
            else
            return false;
        }
        int mintime=0;
        mintime+=min(x,y);
        if(x<=y)
        {
            mintime+=(y-x);
        }
        else
        mintime+=(x-y);

        if(t>=mintime )
        return true;
        else
        return false;
    }
};