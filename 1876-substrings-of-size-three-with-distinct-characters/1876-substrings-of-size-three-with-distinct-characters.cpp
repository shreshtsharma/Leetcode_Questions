class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0;
        int j=2;
        int k=1;
        int count=0;
        for(i=0,k=1,j=2;j<s.size();i++,j++,k++){
            if(s[i]!=s[j] && s[i]!=s[k] && s[k]!=s[j])
            {
                count++;
            }
        }
        return count;
    }
};