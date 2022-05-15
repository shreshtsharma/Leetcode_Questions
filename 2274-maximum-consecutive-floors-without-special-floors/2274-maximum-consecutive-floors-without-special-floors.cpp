class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(),special.end());
        int maxlen=INT_MIN;
        int curlen;
        for(int i=0;i<special.size();i++)
        {
            if(i==0)
            {
                curlen=(special[0]-1)-bottom;
                maxlen=curlen;
            }
            if(i==special.size()-1)
            {
                curlen=top-(special[i]+1);
                if(maxlen<curlen)
                {
                    maxlen=curlen;
                }
            }
            else
            {
                curlen=(special[i+1]-1)-(special[i]+1);
                    if(maxlen<curlen)
                    {
                        maxlen=curlen;
                    }
            }
        }
        if(maxlen>=1)
        {
            return maxlen+1;
        }
        else
            return 0;
    }
};