class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
            while(i<j)
            {
                if(s[i]==s[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    //two cases arises if ith index is deleted and result string is pallindrome
                    //or jth index is deleted and result string is pallindrome;
                    return ispallindrome(s,i+1,j) || ispallindrome(s,i,j-1);
                }
            }
        return true;
    }
    bool ispallindrome(string s,int i,int j)
    {
        for(i;i<j;i++,j--)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
        }
        return true;
    }
};