class Solution {
public:
    int longestContinuousSubstring(string s) {
        int temp_count=0;
        int count=0;
        int val=s[0]-'a';
        for(int i=0;i<s.size();i++)
        {
             
              if(val!=s[i]-'a')
            {
               
                temp_count=0;
                val=s[i]-'a';
            }
            
            if(val==s[i]-'a')
            {
                temp_count++;
                val++;
            }
            if(count<temp_count)
                 {
                count=temp_count;
                }
        }
        
        return count;
    }
};