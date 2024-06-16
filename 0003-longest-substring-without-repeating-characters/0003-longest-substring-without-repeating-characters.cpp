class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int maxi=0;
        unordered_map<char,int> mp;
        while(i<s.size() && j<s.size())
        {
           mp[s[j]]++;
           char ch=s[j];
           while(i<s.size() && mp[ch]>1)
           {
             mp[s[i]]--;
             i++;
           }
           maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};