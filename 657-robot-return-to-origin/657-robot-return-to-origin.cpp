class Solution {
public:
    bool judgeCircle(string moves) {
        int count1=0;
        int count2=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')
            {
                count1++;
            }
            else if(moves[i]=='D')
            {
                count1--;
            }
            else if(moves[i]=='R')
            {
                count2++;
            }
            else 
                count2--;
        }
        if(count1==0 && count2==0)
            return true;
        else
            return false;
    }
};