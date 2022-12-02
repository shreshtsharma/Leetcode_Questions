class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word2.size()!=word1.size())
        return false;
       else 
        {
            set<char>st;
            unordered_map<char,int> mp1;
            for(int i=0;i<word1.size();i++)
            {
                st.insert(word1[i]);
                mp1[word1[i]]++;
            }
            unordered_map<char,int> mp2;
            for(int i=0;i<word2.size();i++)
            {
                if(st.find(word2[i])==st.end())
                return false;
                else
                mp2[word2[i]]++;
            }
            unordered_map<int,int>res;
            for(auto i=mp1.begin();i!=mp1.end();i++)
            {
                res[i->second]++;
            }
            for(auto i=mp2.begin();i!=mp2.end();i++)
            {
                if(res.find(i->second)==res.end() || res[i->second]==0)
                return false;
                else
                res[i->second]--;
            }
            return true;

        }

    }
};