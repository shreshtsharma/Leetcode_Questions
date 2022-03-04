class Solution {
public:
    int maxPower(string s) {
        int curcount=1;
        int maxcount=1;
        int i=0;
        if(s.length()==1) return 1;
        while(s[i]!='\0')
        {
            if(s[i+1]==s[i])
            {
                curcount++;
            }
            else{
                curcount=1;
            }
            if(maxcount<curcount)
            {
                maxcount=curcount;
            }
            i++;
        }
        return maxcount;
    }
};