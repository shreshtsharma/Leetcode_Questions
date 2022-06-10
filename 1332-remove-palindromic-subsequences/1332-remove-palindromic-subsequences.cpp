class Solution {
public:
    int removePalindromeSub(string s) {
        int count=0;
        int fg=0;
        if(s.size()==0)
            return 0;
        else {
            for(int i=0,j=s.size()-1;i<=s.size()/2 && j>=s.size()/2;i++,j--)
            {
                if(s[i]!=s[j])
                    fg=1;
            }
            if(fg==0)
                return 1;
        }
//
        
            return 2;
    }
};