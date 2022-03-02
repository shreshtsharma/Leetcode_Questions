class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count=0;
        int j=0;
        int i=0;
          while(j<t.length())
          {
            
              if(t[j]==s[i])
              {
                  count++;
                  i++;
                  j++;
              }
              else
                  j++;
          }
        if(count==s.length())
        {
            return true;
        }
        else
           return false;
        
    }
};