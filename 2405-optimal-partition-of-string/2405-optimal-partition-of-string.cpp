class Solution {
public:
    int partitionString(string s) {
        vector<int> vec(26,0);
        int count=0;
        int j=0;
        int i=0;
       while(i<s.size() && j<s.size())
        {
            if(vec[s[j]-'a']==0)
            {
                vec[s[j]-'a']++;
                j++;
            }
            else
            {
                count++;
                while(i<j)
                {
                    vec[s[i]-'a']--;
                    i++;
                }
            }
        }
        return count+1;
    }
};